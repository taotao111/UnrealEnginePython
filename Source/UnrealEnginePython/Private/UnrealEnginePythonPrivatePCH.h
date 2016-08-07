// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "UnrealEnginePython.h"

// You should place include statements to your module's private header files here.  You only need to
// add includes for headers that are used in most of your module's source files though.

//#include "PyActorComponent.h"

#include "Engine.h"


#if UNREAL_ENGINE_PYTHON_ON_MAC
#include <python3.5m/Python.h>
#else
#include <include/Python.h>
#endif

#include "UEPyModule.h"
