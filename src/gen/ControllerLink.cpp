/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "ControllerLink.h"
#include "../obj/NiTimeController.h"
#include "../obj/NiInterpolator.h"
#include "../obj/NiObject.h"
#include "../obj/NiStringPalette.h"
using namespace Niflib;

//Constructor
ControllerLink::ControllerLink() : controller(NULL), interpolator(NULL), unknownLink2(NULL), unknownShort0((ushort)0), priority_((byte)0), stringPalette(NULL), nodeNameOffset((uint)-1), propertyTypeOffset((uint)-1), controllerTypeOffset((uint)-1), variableOffset1((uint)-1), variableOffset2((uint)-1) {};

//Destructor
ControllerLink::~ControllerLink() {};