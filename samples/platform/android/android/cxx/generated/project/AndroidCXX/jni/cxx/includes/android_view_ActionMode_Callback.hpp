/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
 			
 			
 			

// Generated Code 

#ifndef _android_view_ActionMode_Callback
#define _android_view_ActionMode_Callback
//
// Scroll Down 
//







#include <android_view_ActionMode.hpp>

#include <android_view_Menu.hpp>

#include <android_view_MenuItem.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class android_view_ActionMode;

class android_view_Menu;

class android_view_MenuItem;

class android_view_ActionMode_Callback
{
public:
 bool onCreateActionMode(android_view_ActionMode& arg0,android_view_Menu& arg1);
 bool onPrepareActionMode(android_view_ActionMode& arg0,android_view_Menu& arg1);
 bool onActionItemClicked(android_view_ActionMode& arg0,android_view_MenuItem& arg1);
 void onDestroyActionMode(android_view_ActionMode& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ActionMode_Callback