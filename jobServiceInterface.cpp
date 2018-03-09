/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: jobServiceInterface
 *** Description: Composite Function Block Type
 *** Version: 
 ***     0.0: 2018-03-05/4DIAC-IDE - 4DIAC-Consortium - 
 *************************************************************************/

#include "jobServiceInterface.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "jobServiceInterface_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_jobServiceInterface, g_nStringIdjobServiceInterface)

const CStringDictionary::TStringId FORTE_jobServiceInterface::scm_anDataInputNames[] = {g_nStringIdQI, g_nStringIdrd_1};

const CStringDictionary::TStringId FORTE_jobServiceInterface::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdSTRING};

const CStringDictionary::TStringId FORTE_jobServiceInterface::scm_anDataOutputNames[] = {g_nStringIdQO, g_nStringIdnrJob, g_nStringIdSTATUS};

const CStringDictionary::TStringId FORTE_jobServiceInterface::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdSTRING, g_nStringIdWSTRING};

const TForteInt16 FORTE_jobServiceInterface::scm_anEIWithIndexes[] = {0, 2};
const TDataIOID FORTE_jobServiceInterface::scm_anEIWith[] = {0, 255, 0, 1, 255};
const CStringDictionary::TStringId FORTE_jobServiceInterface::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_jobServiceInterface::scm_anEOWith[] = {0, 255, 0, 1, 2, 255};
const TForteInt16 FORTE_jobServiceInterface::scm_anEOWithIndexes[] = {0, 2, -1};
const CStringDictionary::TStringId FORTE_jobServiceInterface::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};

const SFBInterfaceSpec FORTE_jobServiceInterface::scm_stFBInterfaceSpec = {
  2,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  2,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  2,  scm_anDataInputNames, scm_anDataInputTypeIds,
  3,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


void FORTE_jobServiceInterface::setInitialValues(){
  QI() = true;
}


const SCFB_FBInstanceData FORTE_jobServiceInterface::scm_astInternalFBs[] = {
  {g_nStringIdSTRING2STRING, g_nStringIdSTRING2STRING},
  {g_nStringIdsysx2nrMessageDeconstruct, g_nStringIdsysx2nrMessageDeconstruct},
  {g_nStringIdsysx2nrMessageConstruct, g_nStringIdsysx2nrMessageConstruct},
  {g_nStringIdSTRING2STRING_1, g_nStringIdSTRING2STRING},
  {g_nStringIdSTRING2STRING_2, g_nStringIdSTRING2STRING},
};

const SCFB_FBParameter FORTE_jobServiceInterface::scm_astParamters[] = {
  {4, g_nStringIdIN, "002000010000000000000"},
};

const SCFB_FBConnectionData FORTE_jobServiceInterface::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageDeconstruct, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageDeconstruct, g_nStringIdINITO), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageConstruct, g_nStringIdINIT), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageConstruct, g_nStringIdINITO), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_1, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageConstruct, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_1, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageDeconstruct, g_nStringIdINIT), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageDeconstruct, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_2, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_2, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageConstruct, g_nStringIdREQ), 2},
};

const SCFB_FBConnectionData FORTE_jobServiceInterface::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING, g_nStringIdOUT), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageDeconstruct, g_nStringIdsysxJob), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageDeconstruct, g_nStringIdQO), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageConstruct, g_nStringIdQI), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageDeconstruct, g_nStringIdbatchSize), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageConstruct, g_nStringIdbatchSize), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageDeconstruct, g_nStringIdbatchCounter), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageConstruct, g_nStringIdbatchCounter), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageDeconstruct, g_nStringIdtorque), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageConstruct, g_nStringIdtorque), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageDeconstruct, g_nStringIdtorqueMax), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageConstruct, g_nStringIdtorqueMax), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageDeconstruct, g_nStringIdtorqueMin), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageConstruct, g_nStringIdtorqueMin), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageDeconstruct, g_nStringIdtorqueFinalTarget), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageConstruct, g_nStringIdtorqueFinalTarget), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageDeconstruct, g_nStringIdangle), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageConstruct, g_nStringIdangle), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageDeconstruct, g_nStringIdangleMax), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageConstruct, g_nStringIdangleMax), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageDeconstruct, g_nStringIdangleMin), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageConstruct, g_nStringIdangleMin), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageDeconstruct, g_nStringIdangleFinalTarget), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageConstruct, g_nStringIdangleFinalTarget), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageConstruct, g_nStringIdQO), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageConstruct, g_nStringIdnrJob), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_1, g_nStringIdIN), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageDeconstruct, g_nStringIdQI), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdrd_1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING, g_nStringIdIN), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_2, g_nStringIdOUT), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdsysx2nrMessageConstruct, g_nStringIdhardCoded), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_1, g_nStringIdOUT), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdnrJob), -1},
};

const SCFB_FBNData FORTE_jobServiceInterface::scm_stFBNData = {
  5, scm_astInternalFBs,
  9, scm_astEventConnections,
  0, 0,
  18, scm_astDataConnections,
  0, 0,
  1, scm_astParamters
};


