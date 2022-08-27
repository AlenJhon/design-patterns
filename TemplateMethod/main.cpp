//#include <iostream>
//#include "template_lib_v1.h"
//#include "template_app_v1.h"
//
//int main()
//{
//	//version 1
//	// 应用程序需要实现程序执行流程
//	library lib;
//	application app;
//	
//	lib.step1();
//	if (app.step2()) {
//		lib.step3();
//	}
//	for (size_t i = 0; i < 5; i++) {
//		app.step4();
//	}
//	lib.step5();
//
//	return 0;
//}





#include <iostream>
#include "template_app_v2.h"

int main()
{
	//version 2
	// 应用程序不需要实现程序执行流程，调用定义好的run流程即可
	library* app = new application();
	app->run();
	delete app


	return 0;
}