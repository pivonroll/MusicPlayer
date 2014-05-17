#ifndef BASICMEDIAPLAYER_PLUGIN_H
#define BASICMEDIAPLAYER_PLUGIN_H

#include <iplugin.h>
#include "basicmediaplayer_global.h"

namespace BasicMediaPlayer
{

class BASICMEDIAPLAYERSHARED_EXPORT BasicMediaPlayerPlugin : public ExtensionSystem::IPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID IPlugin_iic FILE "basicmediaplayer.json")
    Q_INTERFACES(ExtensionSystem::IPlugin)
public:
    BasicMediaPlayerPlugin();

    // IPlugin interface
public:
    QString pluginName() const;

protected:
    void initialize();
};

} // namespace BasicMediaPlayer

#endif // BASICMEDIAPLAYER_PLUGIN_H
