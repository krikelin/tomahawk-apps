/* === This file is part of Tomahawk Player - <http://tomahawk-player.org> ===
 *
 *   Copyright 2011, Dominik Schmidt <domme@tomahawk-player.org>
 *
 *   Tomahawk is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   Tomahawk is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with Tomahawk. If not, see <http://www.gnu.org/licenses/>.
 */

#include "WebAppPlugin.h"


#include "WebAppWidget.h"
#include <libtomahawk/Playlist.h>
#include <utils/Logger.h>



Tomahawk::Widgets::WebAppPlugin::WebAppPlugin()
{
    tDebug() << Q_FUNC_INFO;
}


Tomahawk::Widgets::WebAppPlugin::~WebAppPlugin()
{
    tDebug() << Q_FUNC_INFO;
}


const QString
Tomahawk::Widgets::WebAppPlugin::defaultName()
{
    return "Tomahawk Apps";
}

QString Tomahawk::Widgets::WebAppPlugin::title() const
{
    return "Tomahawk Apps";
}


QString Tomahawk::Widgets::WebAppPlugin::description() const
{
    return QString("Adding Spotify Apps to Tomahawk");
}


const QString Tomahawk::Widgets::WebAppPlugin::pixmapPath() const
{
    return ( RESPATH "images/visualizer.png" );
}


bool
Tomahawk::Widgets::WebAppPlugin::jumpToCurrentTrack()
{
    return false;
}


Tomahawk::playlistinterface_ptr Tomahawk::Widgets::WebAppPlugin::playlistInterface() const
{
    return playlistinterface_ptr();
}



Q_EXPORT_PLUGIN2( Tomahawk::ViewPagePlugin, Tomahawk::Widgets::WebAppPlugin )
