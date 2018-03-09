/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: sysx2nrMessageDeconstruct
 *** Description: Tamplate for a simple Basic Function Block Type
 *** Version: 
 ***     0.0: 2018-03-05/4DIAC-IDE - 4DIAC-Consortium - 
 ***     1.0: 2016-05-26/AZ - fortiss GmbH - 
 *************************************************************************/

#ifndef _SYSX2NRMESSAGEDECONSTRUCT_H_
#define _SYSX2NRMESSAGEDECONSTRUCT_H_

#include <basicfb.h>
#include <forte_bool.h>
#include <forte_string.h>

class FORTE_sysx2nrMessageDeconstruct: public CBasicFB{
  DECLARE_FIRMWARE_FB(FORTE_sysx2nrMessageDeconstruct)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_BOOL &QI() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  };

  CIEC_STRING &sysxJob() {
    return *static_cast<CIEC_STRING*>(getDI(1));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_BOOL &QO() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  };

  CIEC_STRING &batchSize() {
    return *static_cast<CIEC_STRING*>(getDO(1));
  };

  CIEC_STRING &batchCounter() {
    return *static_cast<CIEC_STRING*>(getDO(2));
  };

  CIEC_STRING &torque() {
    return *static_cast<CIEC_STRING*>(getDO(3));
  };

  CIEC_STRING &torqueMax() {
    return *static_cast<CIEC_STRING*>(getDO(4));
  };

  CIEC_STRING &torqueMin() {
    return *static_cast<CIEC_STRING*>(getDO(5));
  };

  CIEC_STRING &torqueFinalTarget() {
    return *static_cast<CIEC_STRING*>(getDO(6));
  };

  CIEC_STRING &angle() {
    return *static_cast<CIEC_STRING*>(getDO(7));
  };

  CIEC_STRING &angleMax() {
    return *static_cast<CIEC_STRING*>(getDO(8));
  };

  CIEC_STRING &angleMin() {
    return *static_cast<CIEC_STRING*>(getDO(9));
  };

  CIEC_STRING &angleFinalTarget() {
    return *static_cast<CIEC_STRING*>(getDO(10));
  };

  static const TEventID scm_nEventINITID = 0;
  static const TEventID scm_nEventREQID = 1;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventINITOID = 0;
  static const TEventID scm_nEventCNFID = 1;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_BASIC_FB_DATA_ARRAY(2, 2, 11, 0, 0);
  void alg_initialize(void);
  void alg_deInitialize(void);
  void alg_normalOperation(void);
  static const TForteInt16 scm_nStateSTART = 0;
  static const TForteInt16 scm_nStateInit = 1;
  static const TForteInt16 scm_nStateNormalOp = 2;
  static const TForteInt16 scm_nStateInitialized = 3;
  static const TForteInt16 scm_nStateDeInit = 4;

  void enterStateSTART(void);
  void enterStateInit(void);
  void enterStateNormalOp(void);
  void enterStateInitialized(void);
  void enterStateDeInit(void);

  virtual void executeEvent(int pa_nEIID);

public:
  FORTE_sysx2nrMessageDeconstruct(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) : 
       CBasicFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId,
              0, m_anFBConnData, m_anFBVarsData){
  };

  virtual ~FORTE_sysx2nrMessageDeconstruct(){};

};

#endif //close the ifdef sequence from the beginning of the file

