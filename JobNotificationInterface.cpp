/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: JobNotificationInterface
 *** Description: Composite Function Block Type
 *** Version: 
 ***     0.0: 2018-03-05/4DIAC-IDE - 4DIAC-Consortium - 
 *************************************************************************/

#include "JobNotificationInterface.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "JobNotificationInterface_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_JobNotificationInterface, g_nStringIdJobNotificationInterface)

const CStringDictionary::TStringId FORTE_JobNotificationInterface::scm_anDataInputNames[] = {g_nStringIdQI, g_nStringIdNRjob};

const CStringDictionary::TStringId FORTE_JobNotificationInterface::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdSTRING};

const CStringDictionary::TStringId FORTE_JobNotificationInterface::scm_anDataOutputNames[] = {g_nStringIdQO, g_nStringIdsd_1};

const CStringDictionary::TStringId FORTE_JobNotificationInterface::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdSTRING};

const TForteInt16 FORTE_JobNotificationInterface::scm_anEIWithIndexes[] = {0, 2};
const TDataIOID FORTE_JobNotificationInterface::scm_anEIWith[] = {0, 255, 0, 1, 255};
const CStringDictionary::TStringId FORTE_JobNotificationInterface::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_JobNotificationInterface::scm_anEOWith[] = {0, 255, 0, 1, 255};
const TForteInt16 FORTE_JobNotificationInterface::scm_anEOWithIndexes[] = {0, 2, -1};
const CStringDictionary::TStringId FORTE_JobNotificationInterface::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};

const SFBInterfaceSpec FORTE_JobNotificationInterface::scm_stFBInterfaceSpec = {
  2,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  2,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  2,  scm_anDataInputNames, scm_anDataInputTypeIds,
  2,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


const SCFB_FBInstanceData FORTE_JobNotificationInterface::scm_astInternalFBs[] = {
  {g_nStringIdSTRING2STRING, g_nStringIdSTRING2STRING},
  {g_nStringIdSTRING2STRING_1, g_nStringIdSTRING2STRING},
  {g_nStringIdSTRING2STRING_2, g_nStringIdSTRING2STRING},
  {g_nStringIdnr2sysxMessageConstruct, g_nStringIdnr2sysxMessageConstruct},
  {g_nStringIdnr2sysxMessageDeconstruct, g_nStringIdnr2sysxMessageDeconstruct},
};

const SCFB_FBParameter FORTE_JobNotificationInterface::scm_astParamters[] = {
  {2, g_nStringIdIN, "jobLogg"},
};

const SCFB_FBConnectionData FORTE_JobNotificationInterface::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageDeconstruct, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageDeconstruct, g_nStringIdINIT), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageDeconstruct, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_2, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageDeconstruct, g_nStringIdINITO), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageConstruct, g_nStringIdINIT), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageConstruct, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_1, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_1, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageConstruct, g_nStringIdINITO), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_2, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageConstruct, g_nStringIdREQ), 3},
};

const SCFB_FBConnectionData FORTE_JobNotificationInterface::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdNRjob), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING, g_nStringIdIN), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING, g_nStringIdOUT), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageDeconstruct, g_nStringIdNRjob), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQI), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageDeconstruct, g_nStringIdQI), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageDeconstruct, g_nStringIdQO), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageConstruct, g_nStringIdQI), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageDeconstruct, g_nStringIdbatchSize), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageConstruct, g_nStringIdbatchSize), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageDeconstruct, g_nStringIdbatchCounter), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageConstruct, g_nStringIdbatchCounter), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageDeconstruct, g_nStringIdtorque), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageConstruct, g_nStringIdtorque), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageDeconstruct, g_nStringIdtorqueMax), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageConstruct, g_nStringIdtorqueMax), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageDeconstruct, g_nStringIdtorqueMin), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageConstruct, g_nStringIdtorqueMin), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageDeconstruct, g_nStringIdtorqueFinalTarget), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageConstruct, g_nStringIdtorqueFinalTarget), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageDeconstruct, g_nStringIdangle), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageConstruct, g_nStringIdangle), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageDeconstruct, g_nStringIdangleMax), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageConstruct, g_nStringIdangleMax), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageDeconstruct, g_nStringIdangleMin), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageConstruct, g_nStringIdangleMin), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageDeconstruct, g_nStringIdangleFinalTarget), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageConstruct, g_nStringIdangleFinalTarget), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_2, g_nStringIdOUT), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageConstruct, g_nStringIdhardCoded), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageConstruct, g_nStringIdnotification), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_1, g_nStringIdIN), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSTRING2STRING_1, g_nStringIdOUT), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdsd_1), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdnr2sysxMessageConstruct, g_nStringIdQO), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQO), -1},
};

const SCFB_FBNData FORTE_JobNotificationInterface::scm_stFBNData = {
  5, scm_astInternalFBs,
  9, scm_astEventConnections,
  0, 0,
  18, scm_astDataConnections,
  0, 0,
  1, scm_astParamters
};


