#include "firstplugin.h"
#include <QDebug>

namespace FirstManager {
namespace Internal {

FirstPlugin::FirstPlugin(QObject *parent) :
    QObject(parent)
{
}

FirstPlugin::~FirstPlugin()
{
}

void FirstPlugin::initialize()
{
    qDebug() << "My fist plugin";
}

} // Internal
} // FirstManager

Q_EXPORT_PLUGIN(FirstManager::Internal::FirstPlugin)

