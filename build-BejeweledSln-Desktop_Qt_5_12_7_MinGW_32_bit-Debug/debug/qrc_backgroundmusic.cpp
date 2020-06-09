/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.12.7
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

  // C:/Users/hdx/Desktop/project/BejeweledSln/BejeweledSln/backgroundMusic/backgroundMusic.wav
  
  
  
static const unsigned char qt_resource_data[36696234] = { 'Q', 'R', 'C', '_', 'D', 'A', 'T', 'A' };

static const unsigned char qt_resource_name[] = {
  // backgroundMusic
  0x0,0xf,
  0x0,0xa8,0x45,0x13,
  0x0,0x62,
  0x0,0x61,0x0,0x63,0x0,0x6b,0x0,0x67,0x0,0x72,0x0,0x6f,0x0,0x75,0x0,0x6e,0x0,0x64,0x0,0x4d,0x0,0x75,0x0,0x73,0x0,0x69,0x0,0x63,
    // backgroundMusic.wav
  0x0,0x13,
  0x5,0x17,0xd,0x6,
  0x0,0x62,
  0x0,0x61,0x0,0x63,0x0,0x6b,0x0,0x67,0x0,0x72,0x0,0x6f,0x0,0x75,0x0,0x6e,0x0,0x64,0x0,0x4d,0x0,0x75,0x0,0x73,0x0,0x69,0x0,0x63,0x0,0x2e,0x0,0x77,
  0x0,0x61,0x0,0x76,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/backgroundMusic
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/backgroundMusic/backgroundMusic.wav
  0x0,0x0,0x0,0x24,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x72,0x7f,0x7b,0xda,0x4d,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_backgroundmusic)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_backgroundmusic)()
{
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x2, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_backgroundmusic)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_backgroundmusic)()
{
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x2, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_backgroundmusic)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_backgroundmusic)(); }
   } dummy;
}
