#ifndef IxPluginDemoExport_h__
#define IxPluginDemoExport_h__

#if defined(WIN32)
#ifdef  IxPluginDemo_EXPORTS
#define IxPluginDemo_EXPORT __declspec(dllexport)
#else
#define  IxPluginDemo_EXPORT __declspec(dllimport)
#endif

#pragma warning( disable: 4251 )

#elif __linux__
#define IxPluginDemo_EXPORT

#else
#define IxPluginDemo_EXPORT
#endif
#endif // ExtendStructureExport_h__
