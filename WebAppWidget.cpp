#include "WebAppWidget.h"
using namespace Tomahawk;
WebAppWidget::WebAppWidget(QWidget *parent) :
    QWidget(parent)
{
    QBoxLayout *boxLayout = new QVBoxLayout(this);

    MetaPlaylistInterface* mpl = new MetaPlaylistInterface();
    m_playlistPtr = Tomahawk::playlistinterface_ptr( mpl) ;

    // Create web view
    m_webView = new QWebView(this);
    m_webView->setGeometry(0, 0, 1120, 1100);
    m_webView->load(QUrl("http://apps.tomahawk-player.org"));

    boxLayout->addWidget(m_webView);
       m_webView->show();
    QObject::connect(m_webView, SIGNAL(WebAppWidget::loadFinished(bool)), this, SLOT(WebAppWidget::loadFinished(bool)));

}
QVBoxLayout* WebAppWidget::layout() {
    return m_layout;
}

PlaylistView* WebAppWidget::playlist() {
    return m_playlist;
}

QWebView* WebAppWidget::webView() {
    return m_webView;
}

WebAppWidget::~WebAppWidget() {

}
QWidget* WebAppWidget::widget() {
    return this;
}

QString WebAppWidget::title() const {
    return QString("Test");
}

QString WebAppWidget::description() const {
    return QString("description");
}

bool WebAppWidget::willAcceptDrag(QMimeData const* t) const {
    return FALSE;
}

bool WebAppWidget::dropMimeData(QMimeData const* t, Qt::DropAction action) {
    return FALSE;
}

bool WebAppWidget::setFilter(const QString &filter) {
    this->filter() = filter;
}
bool WebAppWidget::jumpToCurrentTrack() {
    return false;
}
Tomahawk::playlistinterface_ptr WebAppWidget::playlistInterface() const {
    return m_playlistPtr;
}

void WebAppWidget::loadFinished(bool b) {

    QWebView* sender = m_webView;
    QWebPage* page = sender->page();
    QWebFrame *frame = page->currentFrame();
    QWebElement elm  = frame->documentElement();
    QWebElementCollection metas = elm.findAll("meta[name='tomahawk:context']");
    if (metas.count() > 0) {
        QString uri = metas.at(0).attribute("content");
        // Set uri
        // TODO add playlist handler
        m_playlist = new PlaylistView(this);
        this->layout()->addWidget(m_playlist);
    }
}
