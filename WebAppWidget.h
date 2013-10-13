#ifndef WEBAPPWIDGET_H
#define WEBAPPWIDGET_H

#include <libtomahawk/ViewPage.h>
#include <QBoxLayout>
#include <libtomahawk/MetaPlaylistInterface.h>
#include <libtomahawk/playlist/PlaylistView.h>
#include <QWidget>
#include <QObject>
#include <QListWidgetItem>
#include <QStyledItemDelegate>
#include <qt4/QtWebKit/QtWebKit>

class DLLEXPORT WebAppWidget : public QWidget, public Tomahawk::ViewPage
{
    Q_OBJECT
public:
    WebAppWidget(QWidget *parent = 0);
    ~WebAppWidget();

    virtual QWidget* widget();


    virtual QString title() const;

    virtual DescriptionType descriptionType() { return TextType; }
    virtual QString description() const;
    virtual Tomahawk::artist_ptr descriptionArtist() const { return Tomahawk::artist_ptr(); }
    virtual Tomahawk::album_ptr descriptionAlbum() const { return Tomahawk::album_ptr(); }

    virtual QString longDescription() const { return QString(); }
    virtual QPixmap pixmap() const { return QPixmap( RESPATH "icons/tomahawk-icon-128x128.png" ); }

    virtual bool showInfoBar() const { return true; }
    virtual bool showFilter() const { return false; }
    virtual bool queueVisible() const { return true; }
    virtual Tomahawk::playlistinterface_ptr playlistInterface() const;
    virtual QString filter() const { return m_filter; }
    virtual bool setFilter( const QString& filter );

    virtual bool willAcceptDrag( const QMimeData* data ) const;
    virtual bool dropMimeData( const QMimeData*, Qt::DropAction );

    virtual bool jumpToCurrentTrack();

    virtual bool isTemporaryPage() const { return false; }
    virtual bool isBeingPlayed() const { return false; }
    QWebView *webView();
    PlaylistView *playlist();
    QVBox* layout();
signals:

public slots:
    void loadFinished(bool t);
private:
    Tomahawk::playlistinterface_ptr m_playlistPtr;
    QString m_filter;
    QWebView *m_webView;
    PlaylistView *m_playlist;
    QVBox *layout;
};

#endif // WEBAPPWIDGET_H
