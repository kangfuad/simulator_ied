/*
 * static_model.c
 *
 * automatically generated from ../model/model_cswi.icd
 */
#include "static_model.h"

static void initializeValues();

extern DataSet iedModelds_CSWI_Control_LLN0_SwitchControls;


extern DataSetEntry iedModelds_CSWI_Control_LLN0_SwitchControls_fcda0;
extern DataSetEntry iedModelds_CSWI_Control_LLN0_SwitchControls_fcda1;
extern DataSetEntry iedModelds_CSWI_Control_LLN0_SwitchControls_fcda2;
extern DataSetEntry iedModelds_CSWI_Control_LLN0_SwitchControls_fcda3;
extern DataSetEntry iedModelds_CSWI_Control_LLN0_SwitchControls_fcda4;

DataSetEntry iedModelds_CSWI_Control_LLN0_SwitchControls_fcda0 = {
  "CSWI_Control",
  false,
  "CSWI1$ST$Pos$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_CSWI_Control_LLN0_SwitchControls_fcda1
};

DataSetEntry iedModelds_CSWI_Control_LLN0_SwitchControls_fcda1 = {
  "CSWI_Control",
  false,
  "CSWI1$ST$Pos$q", 
  -1,
  NULL,
  NULL,
  &iedModelds_CSWI_Control_LLN0_SwitchControls_fcda2
};

DataSetEntry iedModelds_CSWI_Control_LLN0_SwitchControls_fcda2 = {
  "CSWI_Control",
  false,
  "CSWI1$ST$Pos$t", 
  -1,
  NULL,
  NULL,
  &iedModelds_CSWI_Control_LLN0_SwitchControls_fcda3
};

DataSetEntry iedModelds_CSWI_Control_LLN0_SwitchControls_fcda3 = {
  "CSWI_Control",
  false,
  "CSWI1$ST$Loc$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_CSWI_Control_LLN0_SwitchControls_fcda4
};

DataSetEntry iedModelds_CSWI_Control_LLN0_SwitchControls_fcda4 = {
  "CSWI_Control",
  false,
  "CSWI1$ST$OpCnt$stVal", 
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_CSWI_Control_LLN0_SwitchControls = {
  "CSWI_Control",
  "LLN0$SwitchControls",
  5,
  &iedModelds_CSWI_Control_LLN0_SwitchControls_fcda0,
  NULL
};

LogicalDevice iedModel_CSWI_Control = {
    LogicalDeviceModelType,
    "CSWI_Control",
    (ModelNode*) &iedModel,
    NULL,
    (ModelNode*) &iedModel_CSWI_Control_LLN0,
    NULL
};

LogicalNode iedModel_CSWI_Control_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_CSWI_Control,
    (ModelNode*) &iedModel_CSWI_Control_CSWI1,
    (ModelNode*) &iedModel_CSWI_Control_LLN0_Mod,
};

DataObject iedModel_CSWI_Control_LLN0_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_CSWI_Control_LLN0,
    (ModelNode*) &iedModel_CSWI_Control_LLN0_Beh,
    (ModelNode*) &iedModel_CSWI_Control_LLN0_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_CSWI_Control_LLN0_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CSWI_Control_LLN0_Mod,
    (ModelNode*) &iedModel_CSWI_Control_LLN0_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_CSWI_Control_LLN0_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CSWI_Control_LLN0_Mod,
    (ModelNode*) &iedModel_CSWI_Control_LLN0_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CSWI_Control_LLN0_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CSWI_Control_LLN0_Mod,
    (ModelNode*) &iedModel_CSWI_Control_LLN0_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CSWI_Control_LLN0_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_CSWI_Control_LLN0_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_CSWI_Control_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_CSWI_Control_LLN0,
    (ModelNode*) &iedModel_CSWI_Control_LLN0_Health,
    (ModelNode*) &iedModel_CSWI_Control_LLN0_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_CSWI_Control_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CSWI_Control_LLN0_Beh,
    (ModelNode*) &iedModel_CSWI_Control_LLN0_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_CSWI_Control_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CSWI_Control_LLN0_Beh,
    (ModelNode*) &iedModel_CSWI_Control_LLN0_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CSWI_Control_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CSWI_Control_LLN0_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CSWI_Control_LLN0_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_CSWI_Control_LLN0,
    (ModelNode*) &iedModel_CSWI_Control_LLN0_NamPlt,
    (ModelNode*) &iedModel_CSWI_Control_LLN0_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_CSWI_Control_LLN0_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CSWI_Control_LLN0_Health,
    (ModelNode*) &iedModel_CSWI_Control_LLN0_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_CSWI_Control_LLN0_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CSWI_Control_LLN0_Health,
    (ModelNode*) &iedModel_CSWI_Control_LLN0_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CSWI_Control_LLN0_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CSWI_Control_LLN0_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CSWI_Control_LLN0_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_CSWI_Control_LLN0,
    NULL,
    (ModelNode*) &iedModel_CSWI_Control_LLN0_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_CSWI_Control_LLN0_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_CSWI_Control_LLN0_NamPlt,
    (ModelNode*) &iedModel_CSWI_Control_LLN0_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_CSWI_Control_LLN0_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_CSWI_Control_LLN0_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_CSWI_Control_CSWI1 = {
    LogicalNodeModelType,
    "CSWI1",
    (ModelNode*) &iedModel_CSWI_Control,
    NULL,
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Mod,
};

DataObject iedModel_CSWI_Control_CSWI1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_CSWI_Control_CSWI1,
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Beh,
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_CSWI_Control_CSWI1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Mod,
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_CSWI_Control_CSWI1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Mod,
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CSWI_Control_CSWI1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Mod,
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CSWI_Control_CSWI1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_CSWI_Control_CSWI1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_CSWI_Control_CSWI1,
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Health,
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_CSWI_Control_CSWI1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Beh,
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_CSWI_Control_CSWI1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Beh,
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CSWI_Control_CSWI1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CSWI_Control_CSWI1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_CSWI_Control_CSWI1,
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_NamPlt,
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_CSWI_Control_CSWI1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Health,
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_CSWI_Control_CSWI1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Health,
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CSWI_Control_CSWI1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CSWI_Control_CSWI1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_CSWI_Control_CSWI1,
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Loc,
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_CSWI_Control_CSWI1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_NamPlt,
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_CSWI_Control_CSWI1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_CSWI_Control_CSWI1_Loc = {
    DataObjectModelType,
    "Loc",
    (ModelNode*) &iedModel_CSWI_Control_CSWI1,
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_OpCnt,
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Loc_stVal,
    0,
    -1
};

DataAttribute iedModel_CSWI_Control_CSWI1_Loc_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Loc,
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Loc_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CSWI_Control_CSWI1_Loc_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Loc,
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Loc_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CSWI_Control_CSWI1_Loc_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Loc,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CSWI_Control_CSWI1_OpCnt = {
    DataObjectModelType,
    "OpCnt",
    (ModelNode*) &iedModel_CSWI_Control_CSWI1,
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Pos,
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_OpCnt_stVal,
    0,
    -1
};

DataAttribute iedModel_CSWI_Control_CSWI1_OpCnt_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_OpCnt,
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_OpCnt_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_CSWI_Control_CSWI1_OpCnt_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_OpCnt,
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_OpCnt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CSWI_Control_CSWI1_OpCnt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_OpCnt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CSWI_Control_CSWI1_Pos = {
    DataObjectModelType,
    "Pos",
    (ModelNode*) &iedModel_CSWI_Control_CSWI1,
    NULL,
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Pos_stVal,
    0,
    -1
};

DataAttribute iedModel_CSWI_Control_CSWI1_Pos_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Pos,
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Pos_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_CODEDENUM,
    0,
    NULL,
    0};

DataAttribute iedModel_CSWI_Control_CSWI1_Pos_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Pos,
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Pos_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CSWI_Control_CSWI1_Pos_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Pos,
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Pos_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CSWI_Control_CSWI1_Pos_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_CSWI_Control_CSWI1_Pos,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

extern ReportControlBlock iedModel_CSWI_Control_LLN0_report0;
extern ReportControlBlock iedModel_CSWI_Control_LLN0_report1;

ReportControlBlock iedModel_CSWI_Control_LLN0_report0 = {&iedModel_CSWI_Control_LLN0, "brcbCSWI01", "CSWI_Control_Data", true, "SwitchControls", 1, 27, 255, 100, 0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_CSWI_Control_LLN0_report1};
ReportControlBlock iedModel_CSWI_Control_LLN0_report1 = {&iedModel_CSWI_Control_LLN0, "brcbCSWI02", "CSWI_Control_Data", true, "SwitchControls", 1, 27, 255, 100, 0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, NULL};







IedModel iedModel = {
    "CSWI_IED",
    &iedModel_CSWI_Control,
    &iedModelds_CSWI_Control_LLN0_SwitchControls,
    &iedModel_CSWI_Control_LLN0_report0,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    initializeValues
};

static void
initializeValues()
{

iedModel_CSWI_Control_CSWI1_Pos_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(4);
}
