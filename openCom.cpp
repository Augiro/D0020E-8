/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: openCom
 *** Description: Composite Function Block Type
 *** Version: 
 ***     0.0: 2018-03-05/4DIAC-IDE - 4DIAC-Consortium - 
 *************************************************************************/

#include "openCom.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "openCom_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_openCom, g_nStringIdopenCom)

const CStringDictionary::TStringId FORTE_openCom::scm_anDataInputNames[] = {g_nStringIdQI, g_nStringIdSYSXjob};

const CStringDictionary::TStringId FORTE_openCom::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdSTRING};

const CStringDictionary::TStringId FORTE_openCom::scm_anDataOutputNames[] = {g_nStringIdQO, g_nStringIdNRjob, g_nStringIdSTATUS};

const CStringDictionary::TStringId FORTE_openCom::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdSTRING, g_nStringIdWSTRING};

const TForteInt16 FORTE_openCom::scm_anEIWithIndexes[] = {0, 2};
const TDataIOID FORTE_openCom::scm_anEIWith[] = {0, 255, 0, 1, 255};
const CStringDictionary::TStringId FORTE_openCom::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_openCom::scm_anEOWith[] = {0, 255, 0, 1, 2, 255};
const TForteInt16 FORTE_openCom::scm_anEOWithIndexes[] = {0, 2, -1};
const CStringDictionary::TStringId FORTE_openCom::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};

const SFBInterfaceSpec FORTE_openCom::scm_stFBInterfaceSpec = {
  2,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  2,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  2,  scm_anDataInputNames, scm_anDataInputTypeIds,
  3,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


void FORTE_openCom::setInitialValues(){
  QI() = true;
}


const SCFB_FBInstanceData FORTE_openCom::scm_astInternalFBs[] = {
  {g_nStringIdCLIENT_1, g_nStringIdCLIENT_1},
  {g_nStringIdSTRING2STRING, g_nStringIdSTRING2STRING},
  {g_nStringIdSTRING2STRING_1, g_nStringIdSTRING2STRING},
};

const SCFB_FBParameter FORTE_openCom::scm_astParamters[] = {
  {0, g_nStringIdID, "192.168.1.1:4545"},
};

const SCFB_FBConnectionData FORTE_openCom::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1, g_nStringIdINIT), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_1, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_1, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1, g_nStringIdINITO), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
};

const SCFB_FBConnectionData FORTE_openCom::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSYSXjob), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING, g_nStringIdIN), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING, g_nStringIdOUT), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1, g_nStringIdSD_1), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1, g_nStringIdRD_1), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_1, g_nStringIdIN), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1, g_nStringIdQO), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_1, g_nStringIdOUT), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdNRjob), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1, g_nStringIdSTATUS), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSTATUS), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1, g_nStringIdQI), 0},
};

const SCFB_FBNData FORTE_openCom::scm_stFBNData = {
  3, scm_astInternalFBs,
  6, scm_astEventConnections,
  0, 0,
  7, scm_astDataConnections,
  0, 0,
  1, scm_astParamters
};


