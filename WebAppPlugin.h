#ifndef WEBAPPPLUGIN_H
#define WEBAPPPLUGIN_H


#include "WebAppWidget.h"

#include <ViewPagePlugin.h>
#include <ViewPageLazyLoader.h>

namespace Tomahawk
{

    namespace Widgets
    {

        class WebAppPlugin : public ViewPageLazyLoader< WebAppWidget >
        {
            Q_PLUGIN_METADATA( IID "org.tomahawk-player.Player.ViewPagePlugin" )
            Q_OBJECT
            Q_INTERFACES( Tomahawk::ViewPagePlugin )
        public:
            WebAppPlugin();
            virtual ~WebAppPlugin();

            virtual Tomahawk::playlistinterface_ptr playlistInterface() const;

            virtual const QString defaultName();
            virtual QString title() const;
            virtual QString description() const;
            virtual const QString pixmapPath() const;

            virtual bool jumpToCurrentTrack();

        };
    }
}
#endif
