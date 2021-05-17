#include "IxPluginDemo.h"

CIxPluginDemo::CIxPluginDemo()
{

}


CIxPluginDemo::~CIxPluginDemo()
{

}

void CIxPluginDemo::test()
{

}

int CIxPluginDemo::GetID()
{
	return -1;
}

const char* CIxPluginDemo::GetName() const
{
	return "CIxPluginDemo";
}

const char* CIxPluginDemo::GetCompany() const
{
	return "";
}

const char* CIxPluginDemo::GetVersion() const
{
	return "";
}

const char* CIxPluginDemo::GetDescription() const
{
	return "";
}

bool CIxPluginDemo::CanUnintall()
{
	return true;
}

bool CIxPluginDemo::Initialize(const char* strModulePath, const char* strDuty )
{
	return false;
}

bool CIxPluginDemo::Destroy()
{
	return false;
}
// 插件load的开始指针
CIxPluginDemo* pThisPlugin = NULL;

IPlugin* CreatePlugin()
{
	if(NULL == pThisPlugin)
	{
		pThisPlugin = new CIxPluginDemo();
	}
	return pThisPlugin;
}
void DestroyPlugin()
{
	if (NULL == pThisPlugin)
	{
		return;
	}
	delete pThisPlugin;
	pThisPlugin = NULL;
}
