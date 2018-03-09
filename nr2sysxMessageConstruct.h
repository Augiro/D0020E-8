/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: nr2sysxMessageConstruct
 *** Description: Tamplate for a simple Basic Function Block Type
 *** Version: 
 ***     0.0: 2018-03-05/4DIAC-IDE - 4DIAC-Consortium - 
 ***     1.0: 2016-05-26/AZ - fortiss GmbH - 
 *************************************************************************/

#ifndef _NR2SYSXMESSAGECONSTRUCT_H_
#define _NR2SYSXMESSAGECONSTRUCT_H_

#include <basicfb.h>
#include <forte_bool.h>
#include <forte_string.h>

class FORTE_nr2sysxMessageConstruct: public CBasicFB{
  DECLARE_FIRMWARE_FB(FORTE_nr2sysxMessageConstruct)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_BOOL &QI() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  };

  CIEC_STRING &batchSize() {
    return *static_cast<CIEC_STRING*>(getDI(1));
  };

  CIEC_STRING &batchCounter() {
    return *static_cast<CIEC_STRING*>(getDI(2));
  };

  CIEC_STRING &torque() {
    return *static_cast<CIEC_STRING*>(getDI(3));
  };

  CIEC_STRING &torqueMax() {
    return *static_cast<CIEC_STRING*>(getDI(4));
  };

  CIEC_STRING &torqueMin() {
    return *static_cast<CIEC_STRING*>(getDI(5));
  };

  CIEC_STRING &torqueFinalTarget() {
    return *static_cast<CIEC_STRING*>(getDI(6));
  };

  CIEC_STRING &angle() {
    return *static_cast<CIEC_STRING*>(getDI(7));
  };

  CIEC_STRING &angleMax() {
    return *static_cast<CIEC_STRING*>(getDI(8));
  };

  CIEC_STRING &angleMin() {
    return *static_cast<CIEC_STRING*>(getDI(9));
  };

  CIEC_STRING &angleFinalTarget() {
    return *static_cast<CIEC_STRING*>(getDI(10));
  };

  CIEC_STRING &hardCoded() {
    return *static_cast<CIEC_STRING*>(getDI(11));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_BOOL &QO() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  };

  CIEC_STRING &notification() {
    return *static_cast<CIEC_STRING*>(getDO(1));
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

   FORTE_BASIC_FB_DATA_ARRAY(2, 12, 2, 0, 0);
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
  FORTE_nr2sysxMessageConstruct(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) : 
       CBasicFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId,
              0, m_anFBConnData, m_anFBVarsData){
  };

  virtual ~FORTE_nr2sysxMessageConstruct(){};

};

#endif //close the ifdef sequence from the beginning of the file

