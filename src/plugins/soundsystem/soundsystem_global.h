#ifndef SOUNDSYSTEM_GLOBAL_H
#define SOUNDSYSTEM_GLOBAL_H

#include <QtGlobal>

#if defined(SOUNDSYSTEM_LIBRARY)
#  define SOUNDSYSTEM_EXPORT Q_DECL_EXPORT
#else
#  define SOUNDSYSTEM_EXPORT Q_DECL_IMPORT
#endif

#endif // SOUNDSYSTEM_GLOBAL_H
