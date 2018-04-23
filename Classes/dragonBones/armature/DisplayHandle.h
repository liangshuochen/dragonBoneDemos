//
//  DisplayHandle.h
//  EgretNative
//
//  Created by liangshuochen on 2018/4/20.
//  Copyright © 2018 Egret. All rights reserved.
//

#ifndef DRAGONBONES_DISPLAYHANDLE_H
#define DRAGONBONES_DISPLAYHANDLE_H

//#include "DragonBones.h"
#include "../core/BaseObject.h"

DRAGONBONES_NAMESPACE_BEGIN

class DisplayHandle : public BaseObject
{
	BIND_CLASS_TYPE_A(DisplayHandle);
	
protected:
	virtual void _onClear() override;
	
public:
	void setHandle(void* display)
	{
    	_displayObject = display;
	}
	
	template <class T>
	inline T* handle()
	{
		return static_cast<T*>(_displayObject);
	}

private:
	void* _displayObject;
	
};



DRAGONBONES_NAMESPACE_END
#endif /* DisplayHandle_hpp */
