#ifndef GUICORE_GLOBAL_H
#define GUICORE_GLOBAL_H

#include <QtGlobal>

#if defined(GUICORE_LIBRARY)
#  define GUICORE_EXPORT Q_DECL_EXPORT
#else
#  define GUICORE_EXPORT Q_DECL_IMPORT
#endif

#endif // GUICORE_GLOBAL_H
