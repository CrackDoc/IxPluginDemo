#ifndef IxPluginDemo_h__
#define IxPluginDemo_h__
#include "IPlugin.h"
#include "IxPluginDemoExport.h"

class CIxPluginDemo : public IPlugin
{
public:
	CIxPluginDemo();
	~CIxPluginDemo();

	//IPlugin ²å¼þÐÅÏ¢
private:
	void test();
public:
	virtual int GetID();

	virtual const char* GetName() const;

	virtual const char* GetCompany() const;

	virtual const char* GetVersion() const;

	virtual const char* GetDescription() const;

	virtual bool CanUnintall();

	virtual bool Initialize(const char* strModulePath, const char* strDuty);

	virtual bool Destroy();
};
extern "C" IxPluginDemo_EXPORT IPlugin* CreatePlugin();
extern "C" IxPluginDemo_EXPORT void DestroyPlugin();

#endif // IxPluginDemo_h__

