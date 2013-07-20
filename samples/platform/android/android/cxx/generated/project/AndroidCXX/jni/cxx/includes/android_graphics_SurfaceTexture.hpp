/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 	

// Generated Code 

#ifndef _android_graphics_SurfaceTexture
#define _android_graphics_SurfaceTexture
//
// Scroll Down 
//











#include <android_graphics_SurfaceTexture_OnFrameAvailableListener.hpp>

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

class android_graphics_SurfaceTexture_OnFrameAvailableListener;

class android_graphics_SurfaceTexture
{
public:
	android_graphics_SurfaceTexture(const android_graphics_SurfaceTexture& cc);
	android_graphics_SurfaceTexture(void * proxy);
	virtual ~android_graphics_SurfaceTexture();
	 void release();
	 long getTimestamp();
	 void setOnFrameAvailableListener(android_graphics_SurfaceTexture_OnFrameAvailableListener& arg0);
	 void setDefaultBufferSize(int& arg0);
	 void updateTexImage();
	 void detachFromGLContext();
	 void attachToGLContext(int& arg0);
	 void getTransformMatrix(std::vector<float>& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_SurfaceTexture