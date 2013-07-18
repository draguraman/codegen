/*
 * Header (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			


#ifndef _android_view_WindowManager
#define _android_view_WindowManager




#include <android_view_Display.hpp>
#include <android_view_View.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_view_WindowManager
{
public:
	android_view_Display getDefaultDisplay();
	void removeViewImmediate(android_view_View& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_WindowManager