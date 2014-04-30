#ifndef EXTENSIONSYSTEM_GLOBAL_H
#define EXTENSIONSYSTEM_GLOBAL_H

#include <QtGlobal>

#if defined(EXTENSIONSYSTEM_LIBRARY)
#  define EXTENSIONSYSTEM_EXPORT Q_DECL_EXPORT
#else
#  define EXTENSIONSYSTEM_EXPORT Q_DECL_IMPORT
#endif

#endif // EXTENSIONSYSTEM_GLOBAL_H
