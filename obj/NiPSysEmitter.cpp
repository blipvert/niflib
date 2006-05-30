/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "NiPSysEmitter.h"

//Definition of TYPE constant
const Type NiPSysEmitter::TYPE("NiPSysEmitter", &NI_P_SYS_EMITTER_PARENT::TYPE );

NiPSysEmitter::NiPSysEmitter() NI_P_SYS_EMITTER_CONSTRUCT {}

NiPSysEmitter::~NiPSysEmitter() {}

void NiPSysEmitter::Read( istream& in, list<uint> & link_stack, unsigned int version ) {
  NI_P_SYS_EMITTER_READ
}

void NiPSysEmitter::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const {
  NI_P_SYS_EMITTER_WRITE
}

string NiPSysEmitter::asString( bool verbose ) const {
  NI_P_SYS_EMITTER_STRING
}

void NiPSysEmitter::FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version ) {
  NI_P_SYS_EMITTER_FIXLINKS
}

const Type & NiPSysEmitter::GetType() const {
  return TYPE;
};
