#ifndef AI_KERNEL_EXPORT_H
#define AI_KERNEL_EXPORT_H

#include <QtCore/qglobal.h>

#ifndef QML_MATERIAL_STATIC_BUILD
#  ifdef QML_MATERIAL_BUILD
#    define QmlMaterial_EXPORT Q_DECL_EXPORT
#  else
#    define QmlMaterial_EXPORT Q_DECL_IMPORT
#  endif
#else
#  define QmlMaterial_EXPORT
#endif

#endif // AI_KERNEL_EXPORT_H
