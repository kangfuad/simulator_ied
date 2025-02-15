/*
 * static_model.c
 *
 * automatically generated from ../../model/model_mmxu.icd
 */
#include "static_model.h"

static void initializeValues();

extern DataSet iedModelds_Measurements_LLN0_MeasurementValues;


extern DataSetEntry iedModelds_Measurements_LLN0_MeasurementValues_fcda0;
extern DataSetEntry iedModelds_Measurements_LLN0_MeasurementValues_fcda1;
extern DataSetEntry iedModelds_Measurements_LLN0_MeasurementValues_fcda2;

DataSetEntry iedModelds_Measurements_LLN0_MeasurementValues_fcda0 = {
  "Measurements",
  false,
  "MMXU1$MX$PhV$phsA$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_Measurements_LLN0_MeasurementValues_fcda1
};

DataSetEntry iedModelds_Measurements_LLN0_MeasurementValues_fcda1 = {
  "Measurements",
  false,
  "MMXU1$MX$A$phsA$cVal$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_Measurements_LLN0_MeasurementValues_fcda2
};

DataSetEntry iedModelds_Measurements_LLN0_MeasurementValues_fcda2 = {
  "Measurements",
  false,
  "MMXU1$MX$Hz$mag$f", 
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_Measurements_LLN0_MeasurementValues = {
  "Measurements",
  "LLN0$MeasurementValues",
  3,
  &iedModelds_Measurements_LLN0_MeasurementValues_fcda0,
  NULL
};

LogicalDevice iedModel_Measurements = {
    LogicalDeviceModelType,
    "Measurements",
    (ModelNode*) &iedModel,
    NULL,
    (ModelNode*) &iedModel_Measurements_LLN0,
    NULL
};

LogicalNode iedModel_Measurements_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_Measurements,
    (ModelNode*) &iedModel_Measurements_MMXU1,
    (ModelNode*) &iedModel_Measurements_LLN0_Mod,
};

DataObject iedModel_Measurements_LLN0_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_Measurements_LLN0,
    (ModelNode*) &iedModel_Measurements_LLN0_Beh,
    (ModelNode*) &iedModel_Measurements_LLN0_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_Measurements_LLN0_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Measurements_LLN0_Mod,
    (ModelNode*) &iedModel_Measurements_LLN0_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_LLN0_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Measurements_LLN0_Mod,
    (ModelNode*) &iedModel_Measurements_LLN0_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_LLN0_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Measurements_LLN0_Mod,
    (ModelNode*) &iedModel_Measurements_LLN0_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_LLN0_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_Measurements_LLN0_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_Measurements_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_Measurements_LLN0,
    (ModelNode*) &iedModel_Measurements_LLN0_Health,
    (ModelNode*) &iedModel_Measurements_LLN0_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_Measurements_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Measurements_LLN0_Beh,
    (ModelNode*) &iedModel_Measurements_LLN0_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Measurements_LLN0_Beh,
    (ModelNode*) &iedModel_Measurements_LLN0_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Measurements_LLN0_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_Measurements_LLN0_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_Measurements_LLN0,
    (ModelNode*) &iedModel_Measurements_LLN0_NamPlt,
    (ModelNode*) &iedModel_Measurements_LLN0_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_Measurements_LLN0_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Measurements_LLN0_Health,
    (ModelNode*) &iedModel_Measurements_LLN0_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_LLN0_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Measurements_LLN0_Health,
    (ModelNode*) &iedModel_Measurements_LLN0_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_LLN0_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Measurements_LLN0_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_Measurements_LLN0_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_Measurements_LLN0,
    NULL,
    (ModelNode*) &iedModel_Measurements_LLN0_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_Measurements_LLN0_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_Measurements_LLN0_NamPlt,
    (ModelNode*) &iedModel_Measurements_LLN0_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_LLN0_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_Measurements_LLN0_NamPlt,
    (ModelNode*) &iedModel_Measurements_LLN0_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_LLN0_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_Measurements_LLN0_NamPlt,
    (ModelNode*) &iedModel_Measurements_LLN0_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_LLN0_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_Measurements_LLN0_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_Measurements_MMXU1 = {
    LogicalNodeModelType,
    "MMXU1",
    (ModelNode*) &iedModel_Measurements,
    NULL,
    (ModelNode*) &iedModel_Measurements_MMXU1_Mod,
};

DataObject iedModel_Measurements_MMXU1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_Measurements_MMXU1,
    (ModelNode*) &iedModel_Measurements_MMXU1_Beh,
    (ModelNode*) &iedModel_Measurements_MMXU1_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_Measurements_MMXU1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Measurements_MMXU1_Mod,
    (ModelNode*) &iedModel_Measurements_MMXU1_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Measurements_MMXU1_Mod,
    (ModelNode*) &iedModel_Measurements_MMXU1_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Measurements_MMXU1_Mod,
    (ModelNode*) &iedModel_Measurements_MMXU1_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_Measurements_MMXU1_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_Measurements_MMXU1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_Measurements_MMXU1,
    (ModelNode*) &iedModel_Measurements_MMXU1_Health,
    (ModelNode*) &iedModel_Measurements_MMXU1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_Measurements_MMXU1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Measurements_MMXU1_Beh,
    (ModelNode*) &iedModel_Measurements_MMXU1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Measurements_MMXU1_Beh,
    (ModelNode*) &iedModel_Measurements_MMXU1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Measurements_MMXU1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_Measurements_MMXU1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_Measurements_MMXU1,
    (ModelNode*) &iedModel_Measurements_MMXU1_NamPlt,
    (ModelNode*) &iedModel_Measurements_MMXU1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_Measurements_MMXU1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Measurements_MMXU1_Health,
    (ModelNode*) &iedModel_Measurements_MMXU1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Measurements_MMXU1_Health,
    (ModelNode*) &iedModel_Measurements_MMXU1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Measurements_MMXU1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_Measurements_MMXU1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_Measurements_MMXU1,
    (ModelNode*) &iedModel_Measurements_MMXU1_Hz,
    (ModelNode*) &iedModel_Measurements_MMXU1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_Measurements_MMXU1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_Measurements_MMXU1_NamPlt,
    (ModelNode*) &iedModel_Measurements_MMXU1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_Measurements_MMXU1_NamPlt,
    (ModelNode*) &iedModel_Measurements_MMXU1_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_Measurements_MMXU1_NamPlt,
    (ModelNode*) &iedModel_Measurements_MMXU1_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_Measurements_MMXU1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_Measurements_MMXU1_Hz = {
    DataObjectModelType,
    "Hz",
    (ModelNode*) &iedModel_Measurements_MMXU1,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV,
    (ModelNode*) &iedModel_Measurements_MMXU1_Hz_mag,
    0,
    -1
};

DataAttribute iedModel_Measurements_MMXU1_Hz_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_Measurements_MMXU1_Hz,
    (ModelNode*) &iedModel_Measurements_MMXU1_Hz_q,
    (ModelNode*) &iedModel_Measurements_MMXU1_Hz_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_Hz_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Measurements_MMXU1_Hz_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_Hz_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Measurements_MMXU1_Hz,
    (ModelNode*) &iedModel_Measurements_MMXU1_Hz_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_Hz_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Measurements_MMXU1_Hz,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_Measurements_MMXU1_PhV = {
    DataObjectModelType,
    "PhV",
    (ModelNode*) &iedModel_Measurements_MMXU1,
    (ModelNode*) &iedModel_Measurements_MMXU1_A,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsA,
    0,
    -1
};

DataObject iedModel_Measurements_MMXU1_PhV_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsB,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsA_cVal,
    0,
    -1
};

DataAttribute iedModel_Measurements_MMXU1_PhV_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsA,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsA_q,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsA_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_PhV_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsA_cVal,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsA_cVal_ang,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsA_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_PhV_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_PhV_phsA_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsA_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_PhV_phsA_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsA_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_PhV_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsA,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsA_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_PhV_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsA,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_Measurements_MMXU1_PhV_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsC,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsB_cVal,
    0,
    -1
};

DataAttribute iedModel_Measurements_MMXU1_PhV_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsB,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsB_q,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsB_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_PhV_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsB_cVal,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsB_cVal_ang,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsB_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_PhV_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_PhV_phsB_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsB_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_PhV_phsB_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsB_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_PhV_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsB,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsB_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_PhV_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsB,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_Measurements_MMXU1_PhV_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_neut,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsC_cVal,
    0,
    -1
};

DataAttribute iedModel_Measurements_MMXU1_PhV_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsC,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsC_q,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsC_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_PhV_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsC_cVal,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsC_cVal_ang,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsC_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_PhV_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_PhV_phsC_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsC_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_PhV_phsC_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsC_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_PhV_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsC,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsC_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_PhV_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_phsC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_Measurements_MMXU1_PhV_neut = {
    DataObjectModelType,
    "neut",
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV,
    NULL,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_neut_cVal,
    0,
    -1
};

DataAttribute iedModel_Measurements_MMXU1_PhV_neut_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_neut,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_neut_q,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_neut_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_PhV_neut_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_neut_cVal,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_neut_cVal_ang,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_neut_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_PhV_neut_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_neut_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_PhV_neut_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_neut_cVal,
    NULL,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_neut_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_PhV_neut_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_neut_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_PhV_neut_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_neut,
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_neut_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_PhV_neut_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Measurements_MMXU1_PhV_neut,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_Measurements_MMXU1_A = {
    DataObjectModelType,
    "A",
    (ModelNode*) &iedModel_Measurements_MMXU1,
    (ModelNode*) &iedModel_Measurements_MMXU1_TotW,
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsA,
    0,
    -1
};

DataObject iedModel_Measurements_MMXU1_A_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_Measurements_MMXU1_A,
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsB,
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsA_cVal,
    0,
    -1
};

DataAttribute iedModel_Measurements_MMXU1_A_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsA,
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsA_q,
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsA_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_A_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsA_cVal,
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsA_cVal_ang,
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsA_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_A_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_A_phsA_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsA_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_A_phsA_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsA_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_A_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsA,
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsA_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_A_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsA,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_Measurements_MMXU1_A_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_Measurements_MMXU1_A,
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsC,
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsB_cVal,
    0,
    -1
};

DataAttribute iedModel_Measurements_MMXU1_A_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsB,
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsB_q,
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsB_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_A_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsB_cVal,
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsB_cVal_ang,
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsB_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_A_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_A_phsB_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsB_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_A_phsB_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsB_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_A_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsB,
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsB_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_A_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsB,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_Measurements_MMXU1_A_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_Measurements_MMXU1_A,
    (ModelNode*) &iedModel_Measurements_MMXU1_A_neut,
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsC_cVal,
    0,
    -1
};

DataAttribute iedModel_Measurements_MMXU1_A_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsC,
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsC_q,
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsC_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_A_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsC_cVal,
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsC_cVal_ang,
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsC_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_A_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_A_phsC_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsC_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_A_phsC_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsC_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_A_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsC,
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsC_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_A_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Measurements_MMXU1_A_phsC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_Measurements_MMXU1_A_neut = {
    DataObjectModelType,
    "neut",
    (ModelNode*) &iedModel_Measurements_MMXU1_A,
    NULL,
    (ModelNode*) &iedModel_Measurements_MMXU1_A_neut_cVal,
    0,
    -1
};

DataAttribute iedModel_Measurements_MMXU1_A_neut_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_Measurements_MMXU1_A_neut,
    (ModelNode*) &iedModel_Measurements_MMXU1_A_neut_q,
    (ModelNode*) &iedModel_Measurements_MMXU1_A_neut_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_A_neut_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_Measurements_MMXU1_A_neut_cVal,
    (ModelNode*) &iedModel_Measurements_MMXU1_A_neut_cVal_ang,
    (ModelNode*) &iedModel_Measurements_MMXU1_A_neut_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_A_neut_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Measurements_MMXU1_A_neut_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_A_neut_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_Measurements_MMXU1_A_neut_cVal,
    NULL,
    (ModelNode*) &iedModel_Measurements_MMXU1_A_neut_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_A_neut_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Measurements_MMXU1_A_neut_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_A_neut_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Measurements_MMXU1_A_neut,
    (ModelNode*) &iedModel_Measurements_MMXU1_A_neut_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_A_neut_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Measurements_MMXU1_A_neut,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_Measurements_MMXU1_TotW = {
    DataObjectModelType,
    "TotW",
    (ModelNode*) &iedModel_Measurements_MMXU1,
    (ModelNode*) &iedModel_Measurements_MMXU1_TotVAr,
    (ModelNode*) &iedModel_Measurements_MMXU1_TotW_mag,
    0,
    -1
};

DataAttribute iedModel_Measurements_MMXU1_TotW_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_Measurements_MMXU1_TotW,
    (ModelNode*) &iedModel_Measurements_MMXU1_TotW_q,
    (ModelNode*) &iedModel_Measurements_MMXU1_TotW_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_TotW_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Measurements_MMXU1_TotW_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_TotW_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Measurements_MMXU1_TotW,
    (ModelNode*) &iedModel_Measurements_MMXU1_TotW_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_TotW_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Measurements_MMXU1_TotW,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_Measurements_MMXU1_TotVAr = {
    DataObjectModelType,
    "TotVAr",
    (ModelNode*) &iedModel_Measurements_MMXU1,
    (ModelNode*) &iedModel_Measurements_MMXU1_TotVA,
    (ModelNode*) &iedModel_Measurements_MMXU1_TotVAr_mag,
    0,
    -1
};

DataAttribute iedModel_Measurements_MMXU1_TotVAr_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_Measurements_MMXU1_TotVAr,
    (ModelNode*) &iedModel_Measurements_MMXU1_TotVAr_q,
    (ModelNode*) &iedModel_Measurements_MMXU1_TotVAr_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_TotVAr_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Measurements_MMXU1_TotVAr_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_TotVAr_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Measurements_MMXU1_TotVAr,
    (ModelNode*) &iedModel_Measurements_MMXU1_TotVAr_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_TotVAr_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Measurements_MMXU1_TotVAr,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_Measurements_MMXU1_TotVA = {
    DataObjectModelType,
    "TotVA",
    (ModelNode*) &iedModel_Measurements_MMXU1,
    (ModelNode*) &iedModel_Measurements_MMXU1_TotPF,
    (ModelNode*) &iedModel_Measurements_MMXU1_TotVA_mag,
    0,
    -1
};

DataAttribute iedModel_Measurements_MMXU1_TotVA_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_Measurements_MMXU1_TotVA,
    (ModelNode*) &iedModel_Measurements_MMXU1_TotVA_q,
    (ModelNode*) &iedModel_Measurements_MMXU1_TotVA_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_TotVA_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Measurements_MMXU1_TotVA_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_TotVA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Measurements_MMXU1_TotVA,
    (ModelNode*) &iedModel_Measurements_MMXU1_TotVA_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_TotVA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Measurements_MMXU1_TotVA,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_Measurements_MMXU1_TotPF = {
    DataObjectModelType,
    "TotPF",
    (ModelNode*) &iedModel_Measurements_MMXU1,
    NULL,
    (ModelNode*) &iedModel_Measurements_MMXU1_TotPF_mag,
    0,
    -1
};

DataAttribute iedModel_Measurements_MMXU1_TotPF_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_Measurements_MMXU1_TotPF,
    (ModelNode*) &iedModel_Measurements_MMXU1_TotPF_q,
    (ModelNode*) &iedModel_Measurements_MMXU1_TotPF_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_TotPF_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Measurements_MMXU1_TotPF_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_TotPF_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Measurements_MMXU1_TotPF,
    (ModelNode*) &iedModel_Measurements_MMXU1_TotPF_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_Measurements_MMXU1_TotPF_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Measurements_MMXU1_TotPF,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

extern ReportControlBlock iedModel_Measurements_LLN0_report0;
extern ReportControlBlock iedModel_Measurements_LLN0_report1;
extern ReportControlBlock iedModel_Measurements_LLN0_report2;
extern ReportControlBlock iedModel_Measurements_LLN0_report3;

ReportControlBlock iedModel_Measurements_LLN0_report0 = {&iedModel_Measurements_LLN0, "brcbMeasurements0101", "MMXU_Measurements", true, "MeasurementValues", 1, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_Measurements_LLN0_report1};
ReportControlBlock iedModel_Measurements_LLN0_report1 = {&iedModel_Measurements_LLN0, "brcbMeasurements0102", "MMXU_Measurements", true, "MeasurementValues", 1, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_Measurements_LLN0_report2};
ReportControlBlock iedModel_Measurements_LLN0_report2 = {&iedModel_Measurements_LLN0, "urcbMeasurements0101", "MMXU_Measurements_URCB", false, "MeasurementValues", 1, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_Measurements_LLN0_report3};
ReportControlBlock iedModel_Measurements_LLN0_report3 = {&iedModel_Measurements_LLN0, "urcbMeasurements0102", "MMXU_Measurements_URCB", false, "MeasurementValues", 1, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, NULL};







IedModel iedModel = {
    "MMXU_IED",
    &iedModel_Measurements,
    &iedModelds_Measurements_LLN0_MeasurementValues,
    &iedModel_Measurements_LLN0_report0,
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

iedModel_Measurements_MMXU1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);
}
