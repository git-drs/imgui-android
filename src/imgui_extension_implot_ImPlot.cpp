#include <imgui_extension_implot_ImPlot.h>

//@line:15

        #include "_implot.h"
     JNIEXPORT jlong JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nCreateContext(JNIEnv* env, jclass clazz) {


//@line:30

        return (uintptr_t)ImPlot::CreateContext();
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nDestroyContext__(JNIEnv* env, jclass clazz) {


//@line:48

        ImPlot::DestroyContext();
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nDestroyContext__J(JNIEnv* env, jclass clazz, jlong ctx) {


//@line:52

        ImPlot::DestroyContext(reinterpret_cast<ImPlotContext*>(ctx));
    

}

JNIEXPORT jlong JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetCurrentContext(JNIEnv* env, jclass clazz) {


//@line:63

        return (uintptr_t)ImPlot::GetCurrentContext();
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetCurrentContext(JNIEnv* env, jclass clazz, jlong ctx) {


//@line:74

        ImPlot::SetCurrentContext(reinterpret_cast<ImPlotContext*>(ctx));
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetImGuiContext(JNIEnv* env, jclass clazz, jlong ctx) {


//@line:82

        ImPlot::SetImGuiContext(reinterpret_cast<ImGuiContext*>(ctx));
    

}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nBeginPlot__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_titleId) {

//@line:131

        auto titleId = obj_titleId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_titleId, JNI_FALSE);
        auto _result = ImPlot::BeginPlot(titleId);
        if (titleId != NULL) env->ReleaseStringUTFChars(obj_titleId, titleId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nBeginPlot__Ljava_lang_String_2FF(JNIEnv* env, jclass clazz, jstring obj_titleId, jfloat sizeX, jfloat sizeY) {

//@line:138

        auto titleId = obj_titleId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_titleId, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImPlot::BeginPlot(titleId, size);
        if (titleId != NULL) env->ReleaseStringUTFChars(obj_titleId, titleId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nBeginPlot__Ljava_lang_String_2FFI(JNIEnv* env, jclass clazz, jstring obj_titleId, jfloat sizeX, jfloat sizeY, jint flags) {

//@line:146

        auto titleId = obj_titleId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_titleId, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImPlot::BeginPlot(titleId, size, flags);
        if (titleId != NULL) env->ReleaseStringUTFChars(obj_titleId, titleId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nBeginPlot__Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_titleId, jint flags) {

//@line:154

        auto titleId = obj_titleId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_titleId, JNI_FALSE);
        auto _result = ImPlot::BeginPlot(titleId, ImVec2(-1,0), flags);
        if (titleId != NULL) env->ReleaseStringUTFChars(obj_titleId, titleId);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nEndPlot(JNIEnv* env, jclass clazz) {


//@line:169

        ImPlot::EndPlot();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nBeginSubplots__Ljava_lang_String_2IIFF(JNIEnv* env, jclass clazz, jstring obj_titleID, jint rows, jint cols, jfloat sizeX, jfloat sizeY) {

//@line:263

        auto titleID = obj_titleID == NULL ? NULL : (char*)env->GetStringUTFChars(obj_titleID, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImPlot::BeginSubplots(titleID, rows, cols, size);
        if (titleID != NULL) env->ReleaseStringUTFChars(obj_titleID, titleID);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nBeginSubplots__Ljava_lang_String_2IIFFI(JNIEnv* env, jclass clazz, jstring obj_titleID, jint rows, jint cols, jfloat sizeX, jfloat sizeY, jint flags) {

//@line:271

        auto titleID = obj_titleID == NULL ? NULL : (char*)env->GetStringUTFChars(obj_titleID, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImPlot::BeginSubplots(titleID, rows, cols, size, flags);
        if (titleID != NULL) env->ReleaseStringUTFChars(obj_titleID, titleID);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nBeginSubplots__Ljava_lang_String_2IIFFI_3F(JNIEnv* env, jclass clazz, jstring obj_titleID, jint rows, jint cols, jfloat sizeX, jfloat sizeY, jint flags, jfloatArray obj_rowRatios) {

//@line:279

        auto titleID = obj_titleID == NULL ? NULL : (char*)env->GetStringUTFChars(obj_titleID, JNI_FALSE);
        auto rowRatios = obj_rowRatios == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_rowRatios, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImPlot::BeginSubplots(titleID, rows, cols, size, flags, &rowRatios[0]);
        if (titleID != NULL) env->ReleaseStringUTFChars(obj_titleID, titleID);
        if (rowRatios != NULL) env->ReleasePrimitiveArrayCritical(obj_rowRatios, rowRatios, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nBeginSubplots__Ljava_lang_String_2IIFFI_3F_3F(JNIEnv* env, jclass clazz, jstring obj_titleID, jint rows, jint cols, jfloat sizeX, jfloat sizeY, jint flags, jfloatArray obj_rowRatios, jfloatArray obj_colRatios) {

//@line:289

        auto titleID = obj_titleID == NULL ? NULL : (char*)env->GetStringUTFChars(obj_titleID, JNI_FALSE);
        auto rowRatios = obj_rowRatios == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_rowRatios, JNI_FALSE);
        auto colRatios = obj_colRatios == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_colRatios, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImPlot::BeginSubplots(titleID, rows, cols, size, flags, &rowRatios[0], &colRatios[0]);
        if (titleID != NULL) env->ReleaseStringUTFChars(obj_titleID, titleID);
        if (rowRatios != NULL) env->ReleasePrimitiveArrayCritical(obj_rowRatios, rowRatios, JNI_FALSE);
        if (colRatios != NULL) env->ReleasePrimitiveArrayCritical(obj_colRatios, colRatios, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nBeginSubplots__Ljava_lang_String_2IIFF_3F_3F(JNIEnv* env, jclass clazz, jstring obj_titleID, jint rows, jint cols, jfloat sizeX, jfloat sizeY, jfloatArray obj_rowRatios, jfloatArray obj_colRatios) {

//@line:301

        auto titleID = obj_titleID == NULL ? NULL : (char*)env->GetStringUTFChars(obj_titleID, JNI_FALSE);
        auto rowRatios = obj_rowRatios == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_rowRatios, JNI_FALSE);
        auto colRatios = obj_colRatios == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_colRatios, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImPlot::BeginSubplots(titleID, rows, cols, size, ImPlotSubplotFlags_None, &rowRatios[0], &colRatios[0]);
        if (titleID != NULL) env->ReleaseStringUTFChars(obj_titleID, titleID);
        if (rowRatios != NULL) env->ReleasePrimitiveArrayCritical(obj_rowRatios, rowRatios, JNI_FALSE);
        if (colRatios != NULL) env->ReleasePrimitiveArrayCritical(obj_colRatios, colRatios, JNI_FALSE);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nEndSubplots(JNIEnv* env, jclass clazz) {


//@line:321

        ImPlot::EndSubplots();
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetupAxis__I(JNIEnv* env, jclass clazz, jint axis) {


//@line:386

        ImPlot::SetupAxis(axis);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetupAxis__ILjava_lang_String_2(JNIEnv* env, jclass clazz, jint axis, jstring obj_label) {

//@line:390

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImPlot::SetupAxis(axis, label);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetupAxis__ILjava_lang_String_2I(JNIEnv* env, jclass clazz, jint axis, jstring obj_label, jint flags) {

//@line:396

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImPlot::SetupAxis(axis, label, flags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetupAxis__II(JNIEnv* env, jclass clazz, jint axis, jint flags) {


//@line:402

        ImPlot::SetupAxis(axis, NULL, flags);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetupAxisLimits__IDD(JNIEnv* env, jclass clazz, jint axis, jdouble vMin, jdouble vMax) {


//@line:422

        ImPlot::SetupAxisLimits(axis, vMin, vMax);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetupAxisLimits__IDDI(JNIEnv* env, jclass clazz, jint axis, jdouble vMin, jdouble vMax, jint cond) {


//@line:426

        ImPlot::SetupAxisLimits(axis, vMin, vMax, cond);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetupAxisLinks(JNIEnv* env, jclass clazz, jint axis, jdoubleArray obj_linkMin, jdoubleArray obj_linkMax) {

//@line:438

        auto linkMin = obj_linkMin == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_linkMin, JNI_FALSE);
        auto linkMax = obj_linkMax == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_linkMax, JNI_FALSE);
        ImPlot::SetupAxisLinks(axis, (linkMin != NULL ? &linkMin[0] : NULL), (linkMax != NULL ? &linkMax[0] : NULL));
        if (linkMin != NULL) env->ReleasePrimitiveArrayCritical(obj_linkMin, linkMin, JNI_FALSE);
        if (linkMax != NULL) env->ReleasePrimitiveArrayCritical(obj_linkMax, linkMax, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetupAxisFormat(JNIEnv* env, jclass clazz, jint axis, jstring obj_fmt) {

//@line:454

        auto fmt = obj_fmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_fmt, JNI_FALSE);
        ImPlot::SetupAxisFormat(axis, fmt);
        if (fmt != NULL) env->ReleaseStringUTFChars(obj_fmt, fmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetupAxisTicks__I_3DI(JNIEnv* env, jclass clazz, jint axis, jdoubleArray obj_values, jint nTicks) {

//@line:494

        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::SetupAxisTicks(axis, &values[0], nTicks);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetupAxisTicks__I_3DI_3Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jint axis, jdoubleArray obj_values, jint nTicks, jobjectArray obj_labels, jint labelsCount) {

//@line:500

        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        const char* labels[labelsCount];
        for (int i = 0; i < labelsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labels, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labels[i] = rawStr;
        };
        ImPlot::SetupAxisTicks(axis, &values[0], nTicks, labels);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        for (int i = 0; i < labelsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labels, i);
            env->ReleaseStringUTFChars(str, labels[i]);
        };
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetupAxisTicks__I_3DI_3Ljava_lang_String_2IZ(JNIEnv* env, jclass clazz, jint axis, jdoubleArray obj_values, jint nTicks, jobjectArray obj_labels, jint labelsCount, jboolean keepDefault) {

//@line:516

        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        const char* labels[labelsCount];
        for (int i = 0; i < labelsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labels, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labels[i] = rawStr;
        };
        ImPlot::SetupAxisTicks(axis, &values[0], nTicks, labels, keepDefault);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        for (int i = 0; i < labelsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labels, i);
            env->ReleaseStringUTFChars(str, labels[i]);
        };
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetupAxisTicks__I_3DIZ(JNIEnv* env, jclass clazz, jint axis, jdoubleArray obj_values, jint nTicks, jboolean keepDefault) {

//@line:532

        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::SetupAxisTicks(axis, &values[0], nTicks, NULL, keepDefault);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetupAxisTicks__IDDI(JNIEnv* env, jclass clazz, jint axis, jdouble vMin, jdouble vMax, jint nTicks) {


//@line:570

        ImPlot::SetupAxisTicks(axis, vMin, vMax, nTicks);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetupAxisTicks__IDDI_3Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jint axis, jdouble vMin, jdouble vMax, jint nTicks, jobjectArray obj_labels, jint labelsCount) {

//@line:574

        const char* labels[labelsCount];
        for (int i = 0; i < labelsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labels, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labels[i] = rawStr;
        };
        ImPlot::SetupAxisTicks(axis, vMin, vMax, nTicks, labels);
        for (int i = 0; i < labelsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labels, i);
            env->ReleaseStringUTFChars(str, labels[i]);
        };
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetupAxisTicks__IDDI_3Ljava_lang_String_2IZ(JNIEnv* env, jclass clazz, jint axis, jdouble vMin, jdouble vMax, jint nTicks, jobjectArray obj_labels, jint labelsCount, jboolean keepDefault) {

//@line:588

        const char* labels[labelsCount];
        for (int i = 0; i < labelsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labels, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labels[i] = rawStr;
        };
        ImPlot::SetupAxisTicks(axis, vMin, vMax, nTicks, labels, keepDefault);
        for (int i = 0; i < labelsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labels, i);
            env->ReleaseStringUTFChars(str, labels[i]);
        };
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetupAxisTicks__IDDIZ(JNIEnv* env, jclass clazz, jint axis, jdouble vMin, jdouble vMax, jint nTicks, jboolean keepDefault) {


//@line:602

        ImPlot::SetupAxisTicks(axis, vMin, vMax, nTicks, NULL, keepDefault);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetupAxisScale(JNIEnv* env, jclass clazz, jint axis, jint scale) {


//@line:613

        ImPlot::SetupAxisScale(axis, scale);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetupAxisLimitsConstraints(JNIEnv* env, jclass clazz, jint axis, jdouble vMin, jdouble vMax) {


//@line:624

        ImPlot::SetupAxisLimitsConstraints(axis, vMin, vMax);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetupAxisZoomConstraints(JNIEnv* env, jclass clazz, jint axis, jdouble vMin, jdouble vMax) {


//@line:635

        ImPlot::SetupAxisZoomConstraints(axis, vMin, vMax);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetupAxes__Ljava_lang_String_2Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_xLabel, jstring obj_yLabel) {

//@line:660

        auto xLabel = obj_xLabel == NULL ? NULL : (char*)env->GetStringUTFChars(obj_xLabel, JNI_FALSE);
        auto yLabel = obj_yLabel == NULL ? NULL : (char*)env->GetStringUTFChars(obj_yLabel, JNI_FALSE);
        ImPlot::SetupAxes(xLabel, yLabel);
        if (xLabel != NULL) env->ReleaseStringUTFChars(obj_xLabel, xLabel);
        if (yLabel != NULL) env->ReleaseStringUTFChars(obj_yLabel, yLabel);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetupAxes__Ljava_lang_String_2Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_xLabel, jstring obj_yLabel, jint xFlags) {

//@line:668

        auto xLabel = obj_xLabel == NULL ? NULL : (char*)env->GetStringUTFChars(obj_xLabel, JNI_FALSE);
        auto yLabel = obj_yLabel == NULL ? NULL : (char*)env->GetStringUTFChars(obj_yLabel, JNI_FALSE);
        ImPlot::SetupAxes(xLabel, yLabel, xFlags);
        if (xLabel != NULL) env->ReleaseStringUTFChars(obj_xLabel, xLabel);
        if (yLabel != NULL) env->ReleaseStringUTFChars(obj_yLabel, yLabel);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetupAxes__Ljava_lang_String_2Ljava_lang_String_2II(JNIEnv* env, jclass clazz, jstring obj_xLabel, jstring obj_yLabel, jint xFlags, jint yFlags) {

//@line:676

        auto xLabel = obj_xLabel == NULL ? NULL : (char*)env->GetStringUTFChars(obj_xLabel, JNI_FALSE);
        auto yLabel = obj_yLabel == NULL ? NULL : (char*)env->GetStringUTFChars(obj_yLabel, JNI_FALSE);
        ImPlot::SetupAxes(xLabel, yLabel, xFlags, yFlags);
        if (xLabel != NULL) env->ReleaseStringUTFChars(obj_xLabel, xLabel);
        if (yLabel != NULL) env->ReleaseStringUTFChars(obj_yLabel, yLabel);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetupAxesLimits__DDDD(JNIEnv* env, jclass clazz, jdouble xMin, jdouble xMax, jdouble yMin, jdouble yMax) {


//@line:700

        ImPlot::SetupAxesLimits(xMin, xMax, yMin, yMax);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetupAxesLimits__DDDDI(JNIEnv* env, jclass clazz, jdouble xMin, jdouble xMax, jdouble yMin, jdouble yMax, jint cond) {


//@line:704

        ImPlot::SetupAxesLimits(xMin, xMax, yMin, yMax, cond);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetupLegend__I(JNIEnv* env, jclass clazz, jint location) {


//@line:722

        ImPlot::SetupLegend(location);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetupLegend__II(JNIEnv* env, jclass clazz, jint location, jint flags) {


//@line:726

        ImPlot::SetupLegend(location, flags);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetupMouseText__I(JNIEnv* env, jclass clazz, jint location) {


//@line:744

        ImPlot::SetupMouseText(location);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetupMouseText__II(JNIEnv* env, jclass clazz, jint location, jint flags) {


//@line:748

        ImPlot::SetupMouseText(location, flags);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetupFinish(JNIEnv* env, jclass clazz) {


//@line:761

        ImPlot::SetupFinish();
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetNextAxisLimits__IDD(JNIEnv* env, jclass clazz, jint axis, jdouble vMin, jdouble vMax) {


//@line:802

        ImPlot::SetNextAxisLimits(axis, vMin, vMax);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetNextAxisLimits__IDDI(JNIEnv* env, jclass clazz, jint axis, jdouble vMin, jdouble vMax, jint cond) {


//@line:806

        ImPlot::SetNextAxisLimits(axis, vMin, vMax, cond);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetNextAxisLinks(JNIEnv* env, jclass clazz, jint axis, jdoubleArray obj_linkMin, jdoubleArray obj_linkMax) {

//@line:818

        auto linkMin = obj_linkMin == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_linkMin, JNI_FALSE);
        auto linkMax = obj_linkMax == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_linkMax, JNI_FALSE);
        ImPlot::SetNextAxisLinks(axis, (linkMin != NULL ? &linkMin[0] : NULL), (linkMax != NULL ? &linkMax[0] : NULL));
        if (linkMin != NULL) env->ReleasePrimitiveArrayCritical(obj_linkMin, linkMin, JNI_FALSE);
        if (linkMax != NULL) env->ReleasePrimitiveArrayCritical(obj_linkMax, linkMax, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetNextAxisToFit(JNIEnv* env, jclass clazz, jint axis) {


//@line:833

        ImPlot::SetNextAxisToFit(axis);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetNextAxesLimits__DDDD(JNIEnv* env, jclass clazz, jdouble xMin, jdouble xMax, jdouble yMin, jdouble yMax) {


//@line:853

        ImPlot::SetNextAxesLimits(xMin, xMax, yMin, yMax);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetNextAxesLimits__DDDDI(JNIEnv* env, jclass clazz, jdouble xMin, jdouble xMax, jdouble yMin, jdouble yMax, jint cond) {


//@line:857

        ImPlot::SetNextAxesLimits(xMin, xMax, yMin, yMax, cond);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetNextAxesToFit(JNIEnv* env, jclass clazz) {


//@line:868

        ImPlot::SetNextAxesToFit();
    

}


//@line:924

        // For a proper type conversion, since C++ doesn't have a "long" type.
        #define long ImS64
        #define LEN(arg) (int)env->GetArrayLength(obj_##arg)
     JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values) {

//@line:967

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3SD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble xscale) {

//@line:975

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3SDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble xscale, jdouble xstart) {

//@line:983

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3SDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble xscale, jdouble xstart, jint flags) {

//@line:991

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3SDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:999

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values) {

//@line:1042

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3ID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble xscale) {

//@line:1050

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3IDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble xscale, jdouble xstart) {

//@line:1058

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3IDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble xscale, jdouble xstart, jint flags) {

//@line:1066

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3IDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:1074

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values) {

//@line:1117

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3JD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble xscale) {

//@line:1125

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3JDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble xscale, jdouble xstart) {

//@line:1133

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3JDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble xscale, jdouble xstart, jint flags) {

//@line:1141

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3JDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:1149

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values) {

//@line:1192

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3FD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble xscale) {

//@line:1200

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3FDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble xscale, jdouble xstart) {

//@line:1208

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3FDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble xscale, jdouble xstart, jint flags) {

//@line:1216

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3FDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:1224

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values) {

//@line:1267

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3DD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble xscale) {

//@line:1275

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3DDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble xscale, jdouble xstart) {

//@line:1283

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3DDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble xscale, jdouble xstart, jint flags) {

//@line:1291

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3DDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:1299

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], LEN(values), xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count) {

//@line:1342

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3SID(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble xscale) {

//@line:1350

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3SIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble xscale, jdouble xstart) {

//@line:1358

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3SIDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble xscale, jdouble xstart, jint flags) {

//@line:1366

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3SIDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:1374

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count) {

//@line:1417

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3IID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble xscale) {

//@line:1425

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3IIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble xscale, jdouble xstart) {

//@line:1433

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3IIDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble xscale, jdouble xstart, jint flags) {

//@line:1441

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3IIDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:1449

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count) {

//@line:1492

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3JID(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble xscale) {

//@line:1500

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3JIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble xscale, jdouble xstart) {

//@line:1508

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3JIDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble xscale, jdouble xstart, jint flags) {

//@line:1516

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3JIDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:1524

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count) {

//@line:1567

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3FID(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble xscale) {

//@line:1575

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3FIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble xscale, jdouble xstart) {

//@line:1583

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3FIDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble xscale, jdouble xstart, jint flags) {

//@line:1591

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3FIDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:1599

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count) {

//@line:1642

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3DID(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble xscale) {

//@line:1650

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3DIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble xscale, jdouble xstart) {

//@line:1658

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3DIDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble xscale, jdouble xstart, jint flags) {

//@line:1666

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3DIDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:1674

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotLine(labelId, &values[0], count, xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3S_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys) {

//@line:1698

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint flags) {

//@line:1708

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3I_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys) {

//@line:1732

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint flags) {

//@line:1742

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3J_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys) {

//@line:1766

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint flags) {

//@line:1776

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3F_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys) {

//@line:1800

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint flags) {

//@line:1810

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3D_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys) {

//@line:1834

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLine__Ljava_lang_String_2_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint flags) {

//@line:1844

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count) {

//@line:1875

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3S_3SII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jint flags) {

//@line:1885

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3S_3SIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jint flags, jint offset) {

//@line:1895

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count) {

//@line:1926

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3I_3III(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jint flags) {

//@line:1936

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3I_3IIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jint flags, jint offset) {

//@line:1946

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count) {

//@line:1977

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3J_3JII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jint flags) {

//@line:1987

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3J_3JIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jint flags, jint offset) {

//@line:1997

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count) {

//@line:2028

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3F_3FII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jint flags) {

//@line:2038

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3F_3FIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jint flags, jint offset) {

//@line:2048

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count) {

//@line:2079

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3D_3DII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jint flags) {

//@line:2089

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotLineV__Ljava_lang_String_2_3D_3DIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jint flags, jint offset) {

//@line:2099

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotLine(labelId, &xs[0], &ys[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values) {

//@line:2146

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3SD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble xscale) {

//@line:2154

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3SDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble xscale, jdouble xstart) {

//@line:2162

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3SDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble xscale, jdouble xstart, jint flags) {

//@line:2170

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3SDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:2178

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values) {

//@line:2221

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3ID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble xscale) {

//@line:2229

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3IDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble xscale, jdouble xstart) {

//@line:2237

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3IDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble xscale, jdouble xstart, jint flags) {

//@line:2245

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3IDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:2253

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values) {

//@line:2296

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3JD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble xscale) {

//@line:2304

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3JDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble xscale, jdouble xstart) {

//@line:2312

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3JDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble xscale, jdouble xstart, jint flags) {

//@line:2320

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3JDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:2328

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values) {

//@line:2371

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3FD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble xscale) {

//@line:2379

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3FDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble xscale, jdouble xstart) {

//@line:2387

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3FDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble xscale, jdouble xstart, jint flags) {

//@line:2395

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3FDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:2403

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values) {

//@line:2446

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3DD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble xscale) {

//@line:2454

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3DDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble xscale, jdouble xstart) {

//@line:2462

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3DDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble xscale, jdouble xstart, jint flags) {

//@line:2470

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3DDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:2478

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], LEN(values), xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count) {

//@line:2521

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3SID(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble xscale) {

//@line:2529

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3SIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble xscale, jdouble xstart) {

//@line:2537

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3SIDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble xscale, jdouble xstart, jint flags) {

//@line:2545

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3SIDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:2553

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count) {

//@line:2596

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3IID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble xscale) {

//@line:2604

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3IIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble xscale, jdouble xstart) {

//@line:2612

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3IIDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble xscale, jdouble xstart, jint flags) {

//@line:2620

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3IIDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:2628

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count) {

//@line:2671

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3JID(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble xscale) {

//@line:2679

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3JIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble xscale, jdouble xstart) {

//@line:2687

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3JIDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble xscale, jdouble xstart, jint flags) {

//@line:2695

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3JIDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:2703

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count) {

//@line:2746

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3FID(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble xscale) {

//@line:2754

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3FIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble xscale, jdouble xstart) {

//@line:2762

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3FIDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble xscale, jdouble xstart, jint flags) {

//@line:2770

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3FIDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:2778

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count) {

//@line:2821

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3DID(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble xscale) {

//@line:2829

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3DIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble xscale, jdouble xstart) {

//@line:2837

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3DIDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble xscale, jdouble xstart, jint flags) {

//@line:2845

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3DIDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:2853

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &values[0], count, xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3S_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys) {

//@line:2877

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint flags) {

//@line:2887

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3I_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys) {

//@line:2911

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint flags) {

//@line:2921

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3J_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys) {

//@line:2945

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint flags) {

//@line:2955

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3F_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys) {

//@line:2979

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint flags) {

//@line:2989

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3D_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys) {

//@line:3013

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatter__Ljava_lang_String_2_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint flags) {

//@line:3023

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count) {

//@line:3054

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3S_3SII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jint flags) {

//@line:3064

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3S_3SIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jint flags, jint offset) {

//@line:3074

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count) {

//@line:3105

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3I_3III(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jint flags) {

//@line:3115

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3I_3IIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jint flags, jint offset) {

//@line:3125

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count) {

//@line:3156

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3J_3JII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jint flags) {

//@line:3166

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3J_3JIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jint flags, jint offset) {

//@line:3176

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count) {

//@line:3207

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3F_3FII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jint flags) {

//@line:3217

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3F_3FIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jint flags, jint offset) {

//@line:3227

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count) {

//@line:3258

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3D_3DII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jint flags) {

//@line:3268

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotScatterV__Ljava_lang_String_2_3D_3DIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jint flags, jint offset) {

//@line:3278

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotScatter(labelId, &xs[0], &ys[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values) {

//@line:3325

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3SD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble xscale) {

//@line:3333

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3SDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble xscale, jdouble xstart) {

//@line:3341

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3SDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble xscale, jdouble xstart, jint flags) {

//@line:3349

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3SDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:3357

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values) {

//@line:3400

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3ID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble xscale) {

//@line:3408

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3IDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble xscale, jdouble xstart) {

//@line:3416

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3IDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble xscale, jdouble xstart, jint flags) {

//@line:3424

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3IDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:3432

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values) {

//@line:3475

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3JD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble xscale) {

//@line:3483

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3JDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble xscale, jdouble xstart) {

//@line:3491

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3JDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble xscale, jdouble xstart, jint flags) {

//@line:3499

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3JDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:3507

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values) {

//@line:3550

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3FD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble xscale) {

//@line:3558

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3FDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble xscale, jdouble xstart) {

//@line:3566

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3FDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble xscale, jdouble xstart, jint flags) {

//@line:3574

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3FDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:3582

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values) {

//@line:3625

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3DD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble xscale) {

//@line:3633

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3DDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble xscale, jdouble xstart) {

//@line:3641

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3DDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble xscale, jdouble xstart, jint flags) {

//@line:3649

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3DDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:3657

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], LEN(values), xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count) {

//@line:3700

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3SID(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble xscale) {

//@line:3708

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3SIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble xscale, jdouble xstart) {

//@line:3716

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3SIDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble xscale, jdouble xstart, jint flags) {

//@line:3724

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3SIDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:3732

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count) {

//@line:3775

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3IID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble xscale) {

//@line:3783

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3IIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble xscale, jdouble xstart) {

//@line:3791

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3IIDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble xscale, jdouble xstart, jint flags) {

//@line:3799

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3IIDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:3807

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count) {

//@line:3850

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3JID(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble xscale) {

//@line:3858

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3JIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble xscale, jdouble xstart) {

//@line:3866

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3JIDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble xscale, jdouble xstart, jint flags) {

//@line:3874

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3JIDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:3882

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count) {

//@line:3925

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3FID(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble xscale) {

//@line:3933

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3FIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble xscale, jdouble xstart) {

//@line:3941

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3FIDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble xscale, jdouble xstart, jint flags) {

//@line:3949

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3FIDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:3957

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count) {

//@line:4000

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3DID(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble xscale) {

//@line:4008

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3DIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble xscale, jdouble xstart) {

//@line:4016

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3DIDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble xscale, jdouble xstart, jint flags) {

//@line:4024

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3DIDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:4032

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &values[0], count, xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3S_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys) {

//@line:4056

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint flags) {

//@line:4066

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3I_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys) {

//@line:4090

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint flags) {

//@line:4100

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3J_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys) {

//@line:4124

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint flags) {

//@line:4134

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3F_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys) {

//@line:4158

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint flags) {

//@line:4168

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3D_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys) {

//@line:4192

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairs__Ljava_lang_String_2_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint flags) {

//@line:4202

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count) {

//@line:4233

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3S_3SII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jint flags) {

//@line:4243

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3S_3SIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jint flags, jint offset) {

//@line:4253

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count) {

//@line:4284

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3I_3III(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jint flags) {

//@line:4294

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3I_3IIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jint flags, jint offset) {

//@line:4304

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count) {

//@line:4335

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3J_3JII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jint flags) {

//@line:4345

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3J_3JIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jint flags, jint offset) {

//@line:4355

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count) {

//@line:4386

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3F_3FII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jint flags) {

//@line:4396

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3F_3FIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jint flags, jint offset) {

//@line:4406

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count) {

//@line:4437

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3D_3DII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jint flags) {

//@line:4447

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStairsV__Ljava_lang_String_2_3D_3DIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jint flags, jint offset) {

//@line:4457

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStairs(labelId, &xs[0], &ys[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values) {

//@line:4511

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3SD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble yRef) {

//@line:4519

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3SDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble yRef, jdouble xscale) {

//@line:4527

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3SDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart) {

//@line:4535

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3SDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart, jint flags) {

//@line:4543

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3SDDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:4551

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values) {

//@line:4601

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3ID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble yRef) {

//@line:4609

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3IDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble yRef, jdouble xscale) {

//@line:4617

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3IDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart) {

//@line:4625

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3IDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart, jint flags) {

//@line:4633

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3IDDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:4641

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values) {

//@line:4691

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3JD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble yRef) {

//@line:4699

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3JDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble yRef, jdouble xscale) {

//@line:4707

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3JDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart) {

//@line:4715

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3JDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart, jint flags) {

//@line:4723

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3JDDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:4731

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values) {

//@line:4781

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3FD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble yRef) {

//@line:4789

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3FDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble yRef, jdouble xscale) {

//@line:4797

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3FDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart) {

//@line:4805

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3FDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart, jint flags) {

//@line:4813

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3FDDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:4821

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values) {

//@line:4871

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3DD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble yRef) {

//@line:4879

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3DDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble yRef, jdouble xscale) {

//@line:4887

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3DDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart) {

//@line:4895

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3DDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart, jint flags) {

//@line:4903

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3DDDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:4911

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], LEN(values), yRef, xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count) {

//@line:4961

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3SID(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble yRef) {

//@line:4969

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3SIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble yRef, jdouble xscale) {

//@line:4977

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3SIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble yRef, jdouble xscale, jdouble xstart) {

//@line:4985

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3SIDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble yRef, jdouble xscale, jdouble xstart, jint flags) {

//@line:4993

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3SIDDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble yRef, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:5001

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count) {

//@line:5051

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3IID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble yRef) {

//@line:5059

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3IIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble yRef, jdouble xscale) {

//@line:5067

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3IIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble yRef, jdouble xscale, jdouble xstart) {

//@line:5075

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3IIDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble yRef, jdouble xscale, jdouble xstart, jint flags) {

//@line:5083

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3IIDDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble yRef, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:5091

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count) {

//@line:5141

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3JID(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble yRef) {

//@line:5149

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3JIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble yRef, jdouble xscale) {

//@line:5157

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3JIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble yRef, jdouble xscale, jdouble xstart) {

//@line:5165

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3JIDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble yRef, jdouble xscale, jdouble xstart, jint flags) {

//@line:5173

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3JIDDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble yRef, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:5181

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count) {

//@line:5231

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3FID(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble yRef) {

//@line:5239

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3FIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble yRef, jdouble xscale) {

//@line:5247

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3FIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble yRef, jdouble xscale, jdouble xstart) {

//@line:5255

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3FIDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble yRef, jdouble xscale, jdouble xstart, jint flags) {

//@line:5263

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3FIDDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble yRef, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:5271

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count) {

//@line:5321

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3DID(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble yRef) {

//@line:5329

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3DIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble yRef, jdouble xscale) {

//@line:5337

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3DIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble yRef, jdouble xscale, jdouble xstart) {

//@line:5345

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3DIDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble yRef, jdouble xscale, jdouble xstart, jint flags) {

//@line:5353

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3DIDDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble yRef, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:5361

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &values[0], count, yRef, xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3S_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys) {

//@line:5399

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3S_3SD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jdouble yRef) {

//@line:5409

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs), yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3S_3SDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jdouble yRef, jint flags) {

//@line:5419

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs), yRef, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3S_3SDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jdouble yRef, jint flags, jint offset) {

//@line:5429

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs), yRef, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3I_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys) {

//@line:5467

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3I_3ID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jdouble yRef) {

//@line:5477

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs), yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3I_3IDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jdouble yRef, jint flags) {

//@line:5487

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs), yRef, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3I_3IDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jdouble yRef, jint flags, jint offset) {

//@line:5497

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs), yRef, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3J_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys) {

//@line:5535

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3J_3JD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jdouble yRef) {

//@line:5545

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs), yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3J_3JDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jdouble yRef, jint flags) {

//@line:5555

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs), yRef, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3J_3JDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jdouble yRef, jint flags, jint offset) {

//@line:5565

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs), yRef, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3F_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys) {

//@line:5603

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3F_3FD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jdouble yRef) {

//@line:5613

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs), yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3F_3FDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jdouble yRef, jint flags) {

//@line:5623

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs), yRef, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3F_3FDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jdouble yRef, jint flags, jint offset) {

//@line:5633

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs), yRef, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3D_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys) {

//@line:5671

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3D_3DD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdouble yRef) {

//@line:5681

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs), yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3D_3DDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdouble yRef, jint flags) {

//@line:5691

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs), yRef, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3D_3DDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdouble yRef, jint flags, jint offset) {

//@line:5701

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], LEN(xs), yRef, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count) {

//@line:5739

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3S_3SID(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jdouble yRef) {

//@line:5749

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count, yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3S_3SIDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jdouble yRef, jint flags) {

//@line:5759

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count, yRef, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3S_3SIDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jdouble yRef, jint flags, jint offset) {

//@line:5769

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count, yRef, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count) {

//@line:5807

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3I_3IID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jdouble yRef) {

//@line:5817

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count, yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3I_3IIDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jdouble yRef, jint flags) {

//@line:5827

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count, yRef, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3I_3IIDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jdouble yRef, jint flags, jint offset) {

//@line:5837

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count, yRef, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count) {

//@line:5875

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3J_3JID(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jdouble yRef) {

//@line:5885

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count, yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3J_3JIDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jdouble yRef, jint flags) {

//@line:5895

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count, yRef, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3J_3JIDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jdouble yRef, jint flags, jint offset) {

//@line:5905

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count, yRef, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count) {

//@line:5943

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3F_3FID(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jdouble yRef) {

//@line:5953

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count, yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3F_3FIDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jdouble yRef, jint flags) {

//@line:5963

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count, yRef, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3F_3FIDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jdouble yRef, jint flags, jint offset) {

//@line:5973

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count, yRef, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count) {

//@line:6011

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3D_3DID(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jdouble yRef) {

//@line:6021

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count, yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3D_3DIDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jdouble yRef, jint flags) {

//@line:6031

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count, yRef, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3D_3DIDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jdouble yRef, jint flags, jint offset) {

//@line:6041

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys[0], count, yRef, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3S_3S_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys1, jshortArray obj_ys2) {

//@line:6067

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3S_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys1, jshortArray obj_ys2, jint flags) {

//@line:6079

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3I_3I_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys1, jintArray obj_ys2) {

//@line:6105

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3I_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys1, jintArray obj_ys2, jint flags) {

//@line:6117

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3J_3J_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys1, jlongArray obj_ys2) {

//@line:6143

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3J_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys1, jlongArray obj_ys2, jint flags) {

//@line:6155

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3F_3F_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys1, jfloatArray obj_ys2) {

//@line:6181

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3F_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys1, jfloatArray obj_ys2, jint flags) {

//@line:6193

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3D_3D_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys1, jdoubleArray obj_ys2) {

//@line:6219

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShaded__Ljava_lang_String_2_3D_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys1, jdoubleArray obj_ys2, jint flags) {

//@line:6231

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3S_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys1, jshortArray obj_ys2, jint count) {

//@line:6264

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3S_3S_3SII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys1, jshortArray obj_ys2, jint count, jint flags) {

//@line:6276

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3S_3S_3SIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys1, jshortArray obj_ys2, jint count, jint flags, jint offset) {

//@line:6288

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3I_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys1, jintArray obj_ys2, jint count) {

//@line:6321

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3I_3I_3III(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys1, jintArray obj_ys2, jint count, jint flags) {

//@line:6333

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3I_3I_3IIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys1, jintArray obj_ys2, jint count, jint flags, jint offset) {

//@line:6345

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3J_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys1, jlongArray obj_ys2, jint count) {

//@line:6378

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3J_3J_3JII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys1, jlongArray obj_ys2, jint count, jint flags) {

//@line:6390

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3J_3J_3JIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys1, jlongArray obj_ys2, jint count, jint flags, jint offset) {

//@line:6402

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3F_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys1, jfloatArray obj_ys2, jint count) {

//@line:6435

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3F_3F_3FII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys1, jfloatArray obj_ys2, jint count, jint flags) {

//@line:6447

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3F_3F_3FIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys1, jfloatArray obj_ys2, jint count, jint flags, jint offset) {

//@line:6459

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3D_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys1, jdoubleArray obj_ys2, jint count) {

//@line:6492

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3D_3D_3DII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys1, jdoubleArray obj_ys2, jint count, jint flags) {

//@line:6504

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotShadedV__Ljava_lang_String_2_3D_3D_3DIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys1, jdoubleArray obj_ys2, jint count, jint flags, jint offset) {

//@line:6516

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys1 = obj_ys1 == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys1, JNI_FALSE);
        auto ys2 = obj_ys2 == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys2, JNI_FALSE);
        ImPlot::PlotShaded(labelId, &xs[0], &ys1[0], &ys2[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys1 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys1, ys1, JNI_FALSE);
        if (ys2 != NULL) env->ReleasePrimitiveArrayCritical(obj_ys2, ys2, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values) {

//@line:6565

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3SD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble barWidth) {

//@line:6573

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barWidth);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3SDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble barWidth, jdouble xstart) {

//@line:6581

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barWidth, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3SDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble barWidth, jdouble xstart, jint flags) {

//@line:6589

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barWidth, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3SDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble barWidth, jdouble xstart, jint flags, jint offset) {

//@line:6597

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barWidth, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values) {

//@line:6640

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3ID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble barWidth) {

//@line:6648

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barWidth);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3IDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble barWidth, jdouble xstart) {

//@line:6656

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barWidth, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3IDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble barWidth, jdouble xstart, jint flags) {

//@line:6664

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barWidth, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3IDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble barWidth, jdouble xstart, jint flags, jint offset) {

//@line:6672

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barWidth, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values) {

//@line:6715

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3JD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble barWidth) {

//@line:6723

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barWidth);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3JDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble barWidth, jdouble xstart) {

//@line:6731

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barWidth, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3JDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble barWidth, jdouble xstart, jint flags) {

//@line:6739

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barWidth, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3JDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble barWidth, jdouble xstart, jint flags, jint offset) {

//@line:6747

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barWidth, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values) {

//@line:6790

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3FD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble barWidth) {

//@line:6798

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barWidth);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3FDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble barWidth, jdouble xstart) {

//@line:6806

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barWidth, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3FDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble barWidth, jdouble xstart, jint flags) {

//@line:6814

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barWidth, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3FDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble barWidth, jdouble xstart, jint flags, jint offset) {

//@line:6822

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barWidth, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values) {

//@line:6865

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3DD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble barWidth) {

//@line:6873

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barWidth);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3DDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble barWidth, jdouble xstart) {

//@line:6881

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barWidth, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3DDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble barWidth, jdouble xstart, jint flags) {

//@line:6889

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barWidth, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3DDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble barWidth, jdouble xstart, jint flags, jint offset) {

//@line:6897

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], LEN(values), barWidth, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count) {

//@line:6940

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3SID(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble barWidth) {

//@line:6948

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barWidth);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3SIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble barWidth, jdouble xstart) {

//@line:6956

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barWidth, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3SIDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble barWidth, jdouble xstart, jint flags) {

//@line:6964

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barWidth, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3SIDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble barWidth, jdouble xstart, jint flags, jint offset) {

//@line:6972

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barWidth, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count) {

//@line:7015

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3IID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble barWidth) {

//@line:7023

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barWidth);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3IIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble barWidth, jdouble xstart) {

//@line:7031

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barWidth, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3IIDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble barWidth, jdouble xstart, jint flags) {

//@line:7039

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barWidth, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3IIDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble barWidth, jdouble xstart, jint flags, jint offset) {

//@line:7047

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barWidth, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count) {

//@line:7090

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3JID(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble barWidth) {

//@line:7098

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barWidth);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3JIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble barWidth, jdouble xstart) {

//@line:7106

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barWidth, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3JIDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble barWidth, jdouble xstart, jint flags) {

//@line:7114

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barWidth, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3JIDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble barWidth, jdouble xstart, jint flags, jint offset) {

//@line:7122

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barWidth, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count) {

//@line:7165

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3FID(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble barWidth) {

//@line:7173

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barWidth);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3FIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble barWidth, jdouble xstart) {

//@line:7181

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barWidth, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3FIDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble barWidth, jdouble xstart, jint flags) {

//@line:7189

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barWidth, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3FIDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble barWidth, jdouble xstart, jint flags, jint offset) {

//@line:7197

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barWidth, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count) {

//@line:7240

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3DID(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble barWidth) {

//@line:7248

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barWidth);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3DIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble barWidth, jdouble xstart) {

//@line:7256

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barWidth, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3DIDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble barWidth, jdouble xstart, jint flags) {

//@line:7264

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barWidth, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3DIDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble barWidth, jdouble xstart, jint flags, jint offset) {

//@line:7272

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBars(labelId, &values[0], count, barWidth, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3S_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys) {

//@line:7303

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), 0.67);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint flags) {

//@line:7313

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), 0.67, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3S_3SII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint flags, jint offset) {

//@line:7323

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), 0.67, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3I_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys) {

//@line:7354

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), 0.67);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint flags) {

//@line:7364

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), 0.67, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3I_3III(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint flags, jint offset) {

//@line:7374

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), 0.67, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3J_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys) {

//@line:7405

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), 0.67);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint flags) {

//@line:7415

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), 0.67, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3J_3JII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint flags, jint offset) {

//@line:7425

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), 0.67, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3F_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys) {

//@line:7456

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), 0.67);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint flags) {

//@line:7466

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), 0.67, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3F_3FII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint flags, jint offset) {

//@line:7476

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), 0.67, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3D_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys) {

//@line:7507

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), 0.67);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint flags) {

//@line:7517

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), 0.67, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBars__Ljava_lang_String_2_3D_3DII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint flags, jint offset) {

//@line:7527

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), 0.67, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3S_3SD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jdouble barWidth) {

//@line:7558

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), barWidth);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3S_3SDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jdouble barWidth, jint flags) {

//@line:7568

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), barWidth, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3S_3SDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jdouble barWidth, jint flags, jint offset) {

//@line:7578

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), barWidth, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3I_3ID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jdouble barWidth) {

//@line:7609

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), barWidth);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3I_3IDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jdouble barWidth, jint flags) {

//@line:7619

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), barWidth, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3I_3IDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jdouble barWidth, jint flags, jint offset) {

//@line:7629

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), barWidth, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3J_3JD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jdouble barWidth) {

//@line:7660

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), barWidth);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3J_3JDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jdouble barWidth, jint flags) {

//@line:7670

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), barWidth, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3J_3JDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jdouble barWidth, jint flags, jint offset) {

//@line:7680

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), barWidth, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3F_3FD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jdouble barWidth) {

//@line:7711

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), barWidth);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3F_3FDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jdouble barWidth, jint flags) {

//@line:7721

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), barWidth, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3F_3FDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jdouble barWidth, jint flags, jint offset) {

//@line:7731

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), barWidth, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3D_3DD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdouble barWidth) {

//@line:7762

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), barWidth);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3D_3DDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdouble barWidth, jint flags) {

//@line:7772

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), barWidth, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3D_3DDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdouble barWidth, jint flags, jint offset) {

//@line:7782

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], LEN(xs), barWidth, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3S_3SID(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jdouble barWidth) {

//@line:7813

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], count, barWidth);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3S_3SIDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jdouble barWidth, jint flags) {

//@line:7823

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], count, barWidth, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3S_3SIDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jdouble barWidth, jint flags, jint offset) {

//@line:7833

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], count, barWidth, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3I_3IID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jdouble barWidth) {

//@line:7864

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], count, barWidth);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3I_3IIDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jdouble barWidth, jint flags) {

//@line:7874

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], count, barWidth, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3I_3IIDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jdouble barWidth, jint flags, jint offset) {

//@line:7884

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], count, barWidth, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3J_3JID(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jdouble barWidth) {

//@line:7915

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], count, barWidth);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3J_3JIDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jdouble barWidth, jint flags) {

//@line:7925

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], count, barWidth, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3J_3JIDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jdouble barWidth, jint flags, jint offset) {

//@line:7935

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], count, barWidth, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3F_3FID(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jdouble barWidth) {

//@line:7966

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], count, barWidth);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3F_3FIDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jdouble barWidth, jint flags) {

//@line:7976

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], count, barWidth, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3F_3FIDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jdouble barWidth, jint flags, jint offset) {

//@line:7986

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], count, barWidth, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3D_3DID(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jdouble barWidth) {

//@line:8017

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], count, barWidth);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3D_3DIDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jdouble barWidth, jint flags) {

//@line:8027

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], count, barWidth, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarsV__Ljava_lang_String_2_3D_3DIDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jdouble barWidth, jint flags, jint offset) {

//@line:8037

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotBars(labelId, &xs[0], &ys[0], count, barWidth, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3SI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jint groupCount) {

//@line:8075

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3SID(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jint groupCount, jdouble groupSize) {

//@line:8091

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount, groupSize);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3SIDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jint groupCount, jdouble groupSize, jdouble shift) {

//@line:8107

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount, groupSize, shift);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3SIDDI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jint groupCount, jdouble groupSize, jdouble shift, jint flags) {

//@line:8123

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount, groupSize, shift, flags);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3II(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jint groupCount) {

//@line:8167

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3IID(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jint groupCount, jdouble groupSize) {

//@line:8183

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount, groupSize);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3IIDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jint groupCount, jdouble groupSize, jdouble shift) {

//@line:8199

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount, groupSize, shift);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3IIDDI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jint groupCount, jdouble groupSize, jdouble shift, jint flags) {

//@line:8215

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount, groupSize, shift, flags);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3JI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jint groupCount) {

//@line:8259

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3JID(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jint groupCount, jdouble groupSize) {

//@line:8275

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount, groupSize);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3JIDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jint groupCount, jdouble groupSize, jdouble shift) {

//@line:8291

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount, groupSize, shift);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3JIDDI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jint groupCount, jdouble groupSize, jdouble shift, jint flags) {

//@line:8307

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount, groupSize, shift, flags);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3FI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jint groupCount) {

//@line:8351

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3FID(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jint groupCount, jdouble groupSize) {

//@line:8367

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount, groupSize);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3FIDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jint groupCount, jdouble groupSize, jdouble shift) {

//@line:8383

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount, groupSize, shift);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3FIDDI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jint groupCount, jdouble groupSize, jdouble shift, jint flags) {

//@line:8399

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount, groupSize, shift, flags);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3DI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jint groupCount) {

//@line:8443

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3DID(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jint groupCount, jdouble groupSize) {

//@line:8459

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount, groupSize);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3DIDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jint groupCount, jdouble groupSize, jdouble shift) {

//@line:8475

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount, groupSize, shift);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroups___3Ljava_lang_String_2I_3DIDDI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jint groupCount, jdouble groupSize, jdouble shift, jint flags) {

//@line:8491

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], LEN(values), groupCount, groupSize, shift, flags);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3SII(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jint itemCount, jint groupCount) {

//@line:8535

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3SIID(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jint itemCount, jint groupCount, jdouble groupSize) {

//@line:8551

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount, groupSize);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3SIIDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jint itemCount, jint groupCount, jdouble groupSize, jdouble shift) {

//@line:8567

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount, groupSize, shift);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3SIIDDI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jint itemCount, jint groupCount, jdouble groupSize, jdouble shift, jint flags) {

//@line:8583

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount, groupSize, shift, flags);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3III(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jint itemCount, jint groupCount) {

//@line:8627

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3IIID(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jint itemCount, jint groupCount, jdouble groupSize) {

//@line:8643

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount, groupSize);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3IIIDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jint itemCount, jint groupCount, jdouble groupSize, jdouble shift) {

//@line:8659

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount, groupSize, shift);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3IIIDDI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jint itemCount, jint groupCount, jdouble groupSize, jdouble shift, jint flags) {

//@line:8675

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount, groupSize, shift, flags);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3JII(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jint itemCount, jint groupCount) {

//@line:8719

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3JIID(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jint itemCount, jint groupCount, jdouble groupSize) {

//@line:8735

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount, groupSize);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3JIIDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jint itemCount, jint groupCount, jdouble groupSize, jdouble shift) {

//@line:8751

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount, groupSize, shift);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3JIIDDI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jint itemCount, jint groupCount, jdouble groupSize, jdouble shift, jint flags) {

//@line:8767

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount, groupSize, shift, flags);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3FII(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jint itemCount, jint groupCount) {

//@line:8811

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3FIID(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jint itemCount, jint groupCount, jdouble groupSize) {

//@line:8827

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount, groupSize);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3FIIDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jint itemCount, jint groupCount, jdouble groupSize, jdouble shift) {

//@line:8843

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount, groupSize, shift);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3FIIDDI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jint itemCount, jint groupCount, jdouble groupSize, jdouble shift, jint flags) {

//@line:8859

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount, groupSize, shift, flags);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3DII(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jint itemCount, jint groupCount) {

//@line:8903

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3DIID(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jint itemCount, jint groupCount, jdouble groupSize) {

//@line:8919

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount, groupSize);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3DIIDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jint itemCount, jint groupCount, jdouble groupSize, jdouble shift) {

//@line:8935

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount, groupSize, shift);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotBarGroupsV___3Ljava_lang_String_2I_3DIIDDI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jint itemCount, jint groupCount, jdouble groupSize, jdouble shift, jint flags) {

//@line:8951

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotBarGroups(labelIds, &values[0], itemCount, groupCount, groupSize, shift, flags);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3S_3S_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jshortArray obj_err) {

//@line:8988

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3S_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jshortArray obj_err, jint flags) {

//@line:9000

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3S_3S_3SII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jshortArray obj_err, jint flags, jint offset) {

//@line:9012

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], LEN(xs), flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3I_3I_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jintArray obj_err) {

//@line:9045

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3I_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jintArray obj_err, jint flags) {

//@line:9057

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3I_3I_3III(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jintArray obj_err, jint flags, jint offset) {

//@line:9069

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], LEN(xs), flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3J_3J_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jlongArray obj_err) {

//@line:9102

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3J_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jlongArray obj_err, jint flags) {

//@line:9114

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3J_3J_3JII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jlongArray obj_err, jint flags, jint offset) {

//@line:9126

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], LEN(xs), flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3F_3F_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jfloatArray obj_err) {

//@line:9159

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3F_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jfloatArray obj_err, jint flags) {

//@line:9171

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3F_3F_3FII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jfloatArray obj_err, jint flags, jint offset) {

//@line:9183

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], LEN(xs), flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3D_3D_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdoubleArray obj_err) {

//@line:9216

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3D_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdoubleArray obj_err, jint flags) {

//@line:9228

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3D_3D_3DII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdoubleArray obj_err, jint flags, jint offset) {

//@line:9240

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], LEN(xs), flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3S_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jshortArray obj_err, jint count) {

//@line:9273

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3S_3S_3SII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jshortArray obj_err, jint count, jint flags) {

//@line:9285

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3S_3S_3SIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jshortArray obj_err, jint count, jint flags, jint offset) {

//@line:9297

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3I_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jintArray obj_err, jint count) {

//@line:9330

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3I_3I_3III(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jintArray obj_err, jint count, jint flags) {

//@line:9342

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3I_3I_3IIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jintArray obj_err, jint count, jint flags, jint offset) {

//@line:9354

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3J_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jlongArray obj_err, jint count) {

//@line:9387

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3J_3J_3JII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jlongArray obj_err, jint count, jint flags) {

//@line:9399

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3J_3J_3JIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jlongArray obj_err, jint count, jint flags, jint offset) {

//@line:9411

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3F_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jfloatArray obj_err, jint count) {

//@line:9444

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3F_3F_3FII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jfloatArray obj_err, jint count, jint flags) {

//@line:9456

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3F_3F_3FIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jfloatArray obj_err, jint count, jint flags, jint offset) {

//@line:9468

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3D_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdoubleArray obj_err, jint count) {

//@line:9501

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3D_3D_3DII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdoubleArray obj_err, jint count, jint flags) {

//@line:9513

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3D_3D_3DIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdoubleArray obj_err, jint count, jint flags, jint offset) {

//@line:9525

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto err = obj_err == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_err, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &err[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (err != NULL) env->ReleasePrimitiveArrayCritical(obj_err, err, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3S_3S_3S_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jshortArray obj_neg, jshortArray obj_pos) {

//@line:9558

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3S_3S_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jshortArray obj_neg, jshortArray obj_pos, jint flags) {

//@line:9572

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3S_3S_3S_3SII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jshortArray obj_neg, jshortArray obj_pos, jint flags, jint offset) {

//@line:9586

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], LEN(xs), flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3I_3I_3I_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jintArray obj_neg, jintArray obj_pos) {

//@line:9621

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3I_3I_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jintArray obj_neg, jintArray obj_pos, jint flags) {

//@line:9635

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3I_3I_3I_3III(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jintArray obj_neg, jintArray obj_pos, jint flags, jint offset) {

//@line:9649

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], LEN(xs), flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3J_3J_3J_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jlongArray obj_neg, jlongArray obj_pos) {

//@line:9684

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3J_3J_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jlongArray obj_neg, jlongArray obj_pos, jint flags) {

//@line:9698

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3J_3J_3J_3JII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jlongArray obj_neg, jlongArray obj_pos, jint flags, jint offset) {

//@line:9712

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], LEN(xs), flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3F_3F_3F_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jfloatArray obj_neg, jfloatArray obj_pos) {

//@line:9747

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3F_3F_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jfloatArray obj_neg, jfloatArray obj_pos, jint flags) {

//@line:9761

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3F_3F_3F_3FII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jfloatArray obj_neg, jfloatArray obj_pos, jint flags, jint offset) {

//@line:9775

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], LEN(xs), flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3D_3D_3D_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdoubleArray obj_neg, jdoubleArray obj_pos) {

//@line:9810

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3D_3D_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdoubleArray obj_neg, jdoubleArray obj_pos, jint flags) {

//@line:9824

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBars__Ljava_lang_String_2_3D_3D_3D_3DII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdoubleArray obj_neg, jdoubleArray obj_pos, jint flags, jint offset) {

//@line:9838

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], LEN(xs), flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3S_3S_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jshortArray obj_neg, jshortArray obj_pos, jint count) {

//@line:9873

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3S_3S_3S_3SII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jshortArray obj_neg, jshortArray obj_pos, jint count, jint flags) {

//@line:9887

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3S_3S_3S_3SIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jshortArray obj_neg, jshortArray obj_pos, jint count, jint flags, jint offset) {

//@line:9901

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3I_3I_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jintArray obj_neg, jintArray obj_pos, jint count) {

//@line:9936

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3I_3I_3I_3III(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jintArray obj_neg, jintArray obj_pos, jint count, jint flags) {

//@line:9950

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3I_3I_3I_3IIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jintArray obj_neg, jintArray obj_pos, jint count, jint flags, jint offset) {

//@line:9964

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3J_3J_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jlongArray obj_neg, jlongArray obj_pos, jint count) {

//@line:9999

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3J_3J_3J_3JII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jlongArray obj_neg, jlongArray obj_pos, jint count, jint flags) {

//@line:10013

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3J_3J_3J_3JIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jlongArray obj_neg, jlongArray obj_pos, jint count, jint flags, jint offset) {

//@line:10027

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3F_3F_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jfloatArray obj_neg, jfloatArray obj_pos, jint count) {

//@line:10062

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3F_3F_3F_3FII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jfloatArray obj_neg, jfloatArray obj_pos, jint count, jint flags) {

//@line:10076

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3F_3F_3F_3FIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jfloatArray obj_neg, jfloatArray obj_pos, jint count, jint flags, jint offset) {

//@line:10090

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3D_3D_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdoubleArray obj_neg, jdoubleArray obj_pos, jint count) {

//@line:10125

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3D_3D_3D_3DII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdoubleArray obj_neg, jdoubleArray obj_pos, jint count, jint flags) {

//@line:10139

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotErrorBarsV__Ljava_lang_String_2_3D_3D_3D_3DIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdoubleArray obj_neg, jdoubleArray obj_pos, jint count, jint flags, jint offset) {

//@line:10153

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto neg = obj_neg == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_neg, JNI_FALSE);
        auto pos = obj_pos == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_pos, JNI_FALSE);
        ImPlot::PlotErrorBars(labelId, &xs[0], &ys[0], &neg[0], &pos[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        if (neg != NULL) env->ReleasePrimitiveArrayCritical(obj_neg, neg, JNI_FALSE);
        if (pos != NULL) env->ReleasePrimitiveArrayCritical(obj_pos, pos, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values) {

//@line:10211

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3SD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble yRef) {

//@line:10219

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3SDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble yRef, jdouble xscale) {

//@line:10227

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), yRef, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3SDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart) {

//@line:10235

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), yRef, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3SDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart, jint flags) {

//@line:10243

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), yRef, xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3SDDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:10251

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), yRef, xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values) {

//@line:10301

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3ID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble yRef) {

//@line:10309

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3IDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble yRef, jdouble xscale) {

//@line:10317

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), yRef, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3IDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart) {

//@line:10325

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), yRef, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3IDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart, jint flags) {

//@line:10333

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), yRef, xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3IDDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:10341

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), yRef, xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values) {

//@line:10391

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3JD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble yRef) {

//@line:10399

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3JDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble yRef, jdouble xscale) {

//@line:10407

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), yRef, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3JDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart) {

//@line:10415

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), yRef, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3JDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart, jint flags) {

//@line:10423

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), yRef, xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3JDDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:10431

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), yRef, xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values) {

//@line:10481

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3FD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble yRef) {

//@line:10489

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3FDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble yRef, jdouble xscale) {

//@line:10497

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), yRef, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3FDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart) {

//@line:10505

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), yRef, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3FDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart, jint flags) {

//@line:10513

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), yRef, xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3FDDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:10521

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), yRef, xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values) {

//@line:10571

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3DD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble yRef) {

//@line:10579

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3DDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble yRef, jdouble xscale) {

//@line:10587

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), yRef, xscale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3DDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart) {

//@line:10595

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), yRef, xscale, xstart);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3DDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart, jint flags) {

//@line:10603

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), yRef, xscale, xstart, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3DDDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble yRef, jdouble xscale, jdouble xstart, jint flags, jint offset) {

//@line:10611

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], LEN(values), yRef, xscale, xstart, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count) {

//@line:10661

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3SID(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble yRef) {

//@line:10669

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3SIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble yRef, jdouble scale) {

//@line:10677

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, yRef, scale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3SIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble yRef, jdouble scale, jdouble start) {

//@line:10685

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, yRef, scale, start);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3SIDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble yRef, jdouble scale, jdouble start, jint flags) {

//@line:10693

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, yRef, scale, start, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3SIDDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jdouble yRef, jdouble scale, jdouble start, jint flags, jint offset) {

//@line:10701

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, yRef, scale, start, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count) {

//@line:10751

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3IID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble yRef) {

//@line:10759

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3IIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble yRef, jdouble scale) {

//@line:10767

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, yRef, scale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3IIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble yRef, jdouble scale, jdouble start) {

//@line:10775

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, yRef, scale, start);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3IIDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble yRef, jdouble scale, jdouble start, jint flags) {

//@line:10783

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, yRef, scale, start, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3IIDDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jdouble yRef, jdouble scale, jdouble start, jint flags, jint offset) {

//@line:10791

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, yRef, scale, start, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count) {

//@line:10841

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3JID(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble yRef) {

//@line:10849

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3JIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble yRef, jdouble scale) {

//@line:10857

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, yRef, scale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3JIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble yRef, jdouble scale, jdouble start) {

//@line:10865

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, yRef, scale, start);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3JIDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble yRef, jdouble scale, jdouble start, jint flags) {

//@line:10873

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, yRef, scale, start, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3JIDDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jdouble yRef, jdouble scale, jdouble start, jint flags, jint offset) {

//@line:10881

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, yRef, scale, start, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count) {

//@line:10931

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3FID(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble yRef) {

//@line:10939

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3FIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble yRef, jdouble scale) {

//@line:10947

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, yRef, scale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3FIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble yRef, jdouble scale, jdouble start) {

//@line:10955

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, yRef, scale, start);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3FIDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble yRef, jdouble scale, jdouble start, jint flags) {

//@line:10963

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, yRef, scale, start, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3FIDDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jdouble yRef, jdouble scale, jdouble start, jint flags, jint offset) {

//@line:10971

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, yRef, scale, start, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count) {

//@line:11021

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3DID(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble yRef) {

//@line:11029

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3DIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble yRef, jdouble scale) {

//@line:11037

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, yRef, scale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3DIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble yRef, jdouble scale, jdouble start) {

//@line:11045

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, yRef, scale, start);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3DIDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble yRef, jdouble scale, jdouble start, jint flags) {

//@line:11053

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, yRef, scale, start, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3DIDDDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jdouble yRef, jdouble scale, jdouble start, jint flags, jint offset) {

//@line:11061

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotStems(labelId, &values[0], count, yRef, scale, start, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3S_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys) {

//@line:11099

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3S_3SD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jdouble ref) {

//@line:11109

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs), ref);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3S_3SDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jdouble ref, jint flags) {

//@line:11119

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs), ref, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3S_3SDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jdouble ref, jint flags, jint offset) {

//@line:11129

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs), ref, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3I_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys) {

//@line:11167

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3I_3ID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jdouble ref) {

//@line:11177

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs), ref);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3I_3IDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jdouble ref, jint flags) {

//@line:11187

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs), ref, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3I_3IDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jdouble ref, jint flags, jint offset) {

//@line:11197

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs), ref, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3J_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys) {

//@line:11235

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3J_3JD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jdouble ref) {

//@line:11245

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs), ref);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3J_3JDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jdouble ref, jint flags) {

//@line:11255

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs), ref, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3J_3JDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jdouble ref, jint flags, jint offset) {

//@line:11265

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs), ref, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3F_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys) {

//@line:11303

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3F_3FD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jdouble ref) {

//@line:11313

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs), ref);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3F_3FDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jdouble ref, jint flags) {

//@line:11323

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs), ref, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3F_3FDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jdouble ref, jint flags, jint offset) {

//@line:11333

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs), ref, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3D_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys) {

//@line:11371

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3D_3DD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdouble ref) {

//@line:11381

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs), ref);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3D_3DDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdouble ref, jint flags) {

//@line:11391

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs), ref, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStems__Ljava_lang_String_2_3D_3DDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jdouble ref, jint flags, jint offset) {

//@line:11401

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], LEN(xs), ref, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count) {

//@line:11439

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3S_3SID(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jdouble yRef) {

//@line:11449

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count, yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3S_3SIDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jdouble yRef, jint flags) {

//@line:11459

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count, yRef, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3S_3SIDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jdouble yRef, jint flags, jint offset) {

//@line:11469

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count, yRef, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count) {

//@line:11507

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3I_3IID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jdouble yRef) {

//@line:11517

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count, yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3I_3IIDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jdouble yRef, jint flags) {

//@line:11527

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count, yRef, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3I_3IIDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jdouble yRef, jint flags, jint offset) {

//@line:11537

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count, yRef, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count) {

//@line:11575

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3J_3JID(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jdouble yRef) {

//@line:11585

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count, yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3J_3JIDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jdouble yRef, jint flags) {

//@line:11595

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count, yRef, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3J_3JIDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jdouble yRef, jint flags, jint offset) {

//@line:11605

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count, yRef, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count) {

//@line:11643

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3F_3FID(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jdouble yRef) {

//@line:11653

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count, yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3F_3FIDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jdouble yRef, jint flags) {

//@line:11663

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count, yRef, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3F_3FIDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jdouble yRef, jint flags, jint offset) {

//@line:11673

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count, yRef, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count) {

//@line:11711

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3D_3DID(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jdouble yRef) {

//@line:11721

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count, yRef);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3D_3DIDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jdouble yRef, jint flags) {

//@line:11731

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count, yRef, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotStemsV__Ljava_lang_String_2_3D_3DIDII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jdouble yRef, jint flags, jint offset) {

//@line:11741

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotStems(labelId, &xs[0], &ys[0], count, yRef, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotInfLines__Ljava_lang_String_2_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values) {

//@line:11772

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotInfLines__Ljava_lang_String_2_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint flags) {

//@line:11780

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], LEN(values), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotInfLines__Ljava_lang_String_2_3SII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint flags, jint offset) {

//@line:11788

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], LEN(values), flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotInfLines__Ljava_lang_String_2_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values) {

//@line:11817

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotInfLines__Ljava_lang_String_2_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint flags) {

//@line:11825

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], LEN(values), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotInfLines__Ljava_lang_String_2_3III(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint flags, jint offset) {

//@line:11833

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], LEN(values), flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotInfLines__Ljava_lang_String_2_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values) {

//@line:11862

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotInfLines__Ljava_lang_String_2_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint flags) {

//@line:11870

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], LEN(values), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotInfLines__Ljava_lang_String_2_3JII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint flags, jint offset) {

//@line:11878

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], LEN(values), flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotInfLines__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values) {

//@line:11907

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotInfLines__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint flags) {

//@line:11915

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], LEN(values), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotInfLines__Ljava_lang_String_2_3FII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint flags, jint offset) {

//@line:11923

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], LEN(values), flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotInfLines__Ljava_lang_String_2_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values) {

//@line:11952

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotInfLines__Ljava_lang_String_2_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint flags) {

//@line:11960

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], LEN(values), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotInfLines__Ljava_lang_String_2_3DII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint flags, jint offset) {

//@line:11968

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], LEN(values), flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotInfLinesV__Ljava_lang_String_2_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count) {

//@line:11997

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotInfLinesV__Ljava_lang_String_2_3SII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jint flags) {

//@line:12005

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotInfLinesV__Ljava_lang_String_2_3SIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jint flags, jint offset) {

//@line:12013

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotInfLinesV__Ljava_lang_String_2_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count) {

//@line:12042

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotInfLinesV__Ljava_lang_String_2_3III(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jint flags) {

//@line:12050

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotInfLinesV__Ljava_lang_String_2_3IIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jint flags, jint offset) {

//@line:12058

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotInfLinesV__Ljava_lang_String_2_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count) {

//@line:12087

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotInfLinesV__Ljava_lang_String_2_3JII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jint flags) {

//@line:12095

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotInfLinesV__Ljava_lang_String_2_3JIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jint flags, jint offset) {

//@line:12103

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotInfLinesV__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count) {

//@line:12132

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotInfLinesV__Ljava_lang_String_2_3FII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jint flags) {

//@line:12140

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotInfLinesV__Ljava_lang_String_2_3FIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jint flags, jint offset) {

//@line:12148

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotInfLinesV__Ljava_lang_String_2_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count) {

//@line:12177

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotInfLinesV__Ljava_lang_String_2_3DII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jint flags) {

//@line:12185

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotInfLinesV__Ljava_lang_String_2_3DIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jint flags, jint offset) {

//@line:12193

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotInfLines(labelId, &values[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3SDDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jdouble x, jdouble y, jdouble radius) {

//@line:12236

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3SDDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt) {

//@line:12252

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, labelFmt);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3SDDDLjava_lang_String_2D(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0) {

//@line:12270

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, labelFmt, angle0);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3SDDDLjava_lang_String_2DI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0, jint flags) {

//@line:12288

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, labelFmt, angle0, flags);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3SDDDDI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jdouble x, jdouble y, jdouble radius, jdouble angle0, jint flags) {

//@line:12306

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, "%.1f", angle0, flags);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3IDDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jdouble x, jdouble y, jdouble radius) {

//@line:12357

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3IDDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt) {

//@line:12373

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, labelFmt);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3IDDDLjava_lang_String_2D(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0) {

//@line:12391

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, labelFmt, angle0);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3IDDDLjava_lang_String_2DI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0, jint flags) {

//@line:12409

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, labelFmt, angle0, flags);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3IDDDDI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jdouble x, jdouble y, jdouble radius, jdouble angle0, jint flags) {

//@line:12427

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, "%.1f", angle0, flags);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3JDDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jdouble x, jdouble y, jdouble radius) {

//@line:12478

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3JDDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt) {

//@line:12494

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, labelFmt);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3JDDDLjava_lang_String_2D(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0) {

//@line:12512

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, labelFmt, angle0);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3JDDDLjava_lang_String_2DI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0, jint flags) {

//@line:12530

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, labelFmt, angle0, flags);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3JDDDDI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jdouble x, jdouble y, jdouble radius, jdouble angle0, jint flags) {

//@line:12548

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, "%.1f", angle0, flags);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3FDDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jdouble x, jdouble y, jdouble radius) {

//@line:12599

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3FDDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt) {

//@line:12615

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, labelFmt);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3FDDDLjava_lang_String_2D(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0) {

//@line:12633

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, labelFmt, angle0);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3FDDDLjava_lang_String_2DI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0, jint flags) {

//@line:12651

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, labelFmt, angle0, flags);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3FDDDDI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jdouble x, jdouble y, jdouble radius, jdouble angle0, jint flags) {

//@line:12669

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, "%.1f", angle0, flags);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3DDDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jdouble x, jdouble y, jdouble radius) {

//@line:12720

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3DDDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt) {

//@line:12736

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, labelFmt);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3DDDDLjava_lang_String_2D(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0) {

//@line:12754

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, labelFmt, angle0);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3DDDDLjava_lang_String_2DI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0, jint flags) {

//@line:12772

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, labelFmt, angle0, flags);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChart___3Ljava_lang_String_2I_3DDDDDI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jdouble x, jdouble y, jdouble radius, jdouble angle0, jint flags) {

//@line:12790

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], LEN(values), x, y, radius, "%.1f", angle0, flags);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3SIDDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jint count, jdouble x, jdouble y, jdouble radius) {

//@line:12841

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3SIDDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt) {

//@line:12857

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, labelFmt);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3SIDDDLjava_lang_String_2D(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0) {

//@line:12875

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, labelFmt, angle0);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3SIDDDLjava_lang_String_2DI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0, jint flags) {

//@line:12893

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, labelFmt, angle0, flags);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3SIDDDDI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jshortArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jdouble angle0, jint flags) {

//@line:12911

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, "%.1f", angle0, flags);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3IIDDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jint count, jdouble x, jdouble y, jdouble radius) {

//@line:12962

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3IIDDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt) {

//@line:12978

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, labelFmt);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3IIDDDLjava_lang_String_2D(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0) {

//@line:12996

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, labelFmt, angle0);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3IIDDDLjava_lang_String_2DI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0, jint flags) {

//@line:13014

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, labelFmt, angle0, flags);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3IIDDDDI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jintArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jdouble angle0, jint flags) {

//@line:13032

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, "%.1f", angle0, flags);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3JIDDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jint count, jdouble x, jdouble y, jdouble radius) {

//@line:13083

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3JIDDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt) {

//@line:13099

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, labelFmt);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3JIDDDLjava_lang_String_2D(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0) {

//@line:13117

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, labelFmt, angle0);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3JIDDDLjava_lang_String_2DI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0, jint flags) {

//@line:13135

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, labelFmt, angle0, flags);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3JIDDDDI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jlongArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jdouble angle0, jint flags) {

//@line:13153

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, "%.1f", angle0, flags);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3FIDDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jint count, jdouble x, jdouble y, jdouble radius) {

//@line:13204

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3FIDDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt) {

//@line:13220

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, labelFmt);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3FIDDDLjava_lang_String_2D(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0) {

//@line:13238

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, labelFmt, angle0);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3FIDDDLjava_lang_String_2DI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0, jint flags) {

//@line:13256

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, labelFmt, angle0, flags);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3FIDDDDI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jfloatArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jdouble angle0, jint flags) {

//@line:13274

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, "%.1f", angle0, flags);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3DIDDD(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jint count, jdouble x, jdouble y, jdouble radius) {

//@line:13325

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3DIDDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt) {

//@line:13341

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, labelFmt);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3DIDDDLjava_lang_String_2D(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0) {

//@line:13359

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, labelFmt, angle0);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3DIDDDLjava_lang_String_2DI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jstring obj_labelFmt, jdouble angle0, jint flags) {

//@line:13377

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, labelFmt, angle0, flags);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotPieChartV___3Ljava_lang_String_2I_3DIDDDDI(JNIEnv* env, jclass clazz, jobjectArray obj_labelIds, jint labelIdsCount, jdoubleArray obj_values, jint count, jdouble x, jdouble y, jdouble radius, jdouble angle0, jint flags) {

//@line:13395

        const char* labelIds[labelIdsCount];
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            auto rawStr = (char*)env->GetStringUTFChars(str, JNI_FALSE);
            labelIds[i] = rawStr;
        };
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotPieChart(labelIds, &values[0], count, x, y, radius, "%.1f", angle0, flags);
        for (int i = 0; i < labelIdsCount; i++) {
            const jstring str = (jstring)env->GetObjectArrayElement(obj_labelIds, i);
            env->ReleaseStringUTFChars(str, labelIds[i]);
        };
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3SII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint rows, jint cols) {

//@line:13495

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3SIID(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint rows, jint cols, jdouble scaleMin) {

//@line:13503

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3SIIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax) {

//@line:13511

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3SIIDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt) {

//@line:13519

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3SIIDDLjava_lang_String_2DD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt, jdouble boundsMinX, jdouble boundsMinY) {

//@line:13529

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt, ImPlotPoint(boundsMinX, boundsMinY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3SIIDDLjava_lang_String_2DDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY) {

//@line:13539

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt, ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3SIIDDLjava_lang_String_2DDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY, jint flags) {

//@line:13549

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt, ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3SIIDDDDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY, jint flags) {

//@line:13559

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, "%.1f", ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3III(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint rows, jint cols) {

//@line:13651

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3IIID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint rows, jint cols, jdouble scaleMin) {

//@line:13659

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3IIIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax) {

//@line:13667

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3IIIDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt) {

//@line:13675

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3IIIDDLjava_lang_String_2DD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt, jdouble boundsMinX, jdouble boundsMinY) {

//@line:13685

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt, ImPlotPoint(boundsMinX, boundsMinY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3IIIDDLjava_lang_String_2DDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY) {

//@line:13695

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt, ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3IIIDDLjava_lang_String_2DDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY, jint flags) {

//@line:13705

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt, ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3IIIDDDDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY, jint flags) {

//@line:13715

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, "%.1f", ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3JII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint rows, jint cols) {

//@line:13807

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3JIID(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint rows, jint cols, jdouble scaleMin) {

//@line:13815

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3JIIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax) {

//@line:13823

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3JIIDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt) {

//@line:13831

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3JIIDDLjava_lang_String_2DD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt, jdouble boundsMinX, jdouble boundsMinY) {

//@line:13841

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt, ImPlotPoint(boundsMinX, boundsMinY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3JIIDDLjava_lang_String_2DDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY) {

//@line:13851

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt, ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3JIIDDLjava_lang_String_2DDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY, jint flags) {

//@line:13861

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt, ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3JIIDDDDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY, jint flags) {

//@line:13871

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, "%.1f", ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3FII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint rows, jint cols) {

//@line:13963

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3FIID(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint rows, jint cols, jdouble scaleMin) {

//@line:13971

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3FIIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax) {

//@line:13979

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3FIIDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt) {

//@line:13987

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3FIIDDLjava_lang_String_2DD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt, jdouble boundsMinX, jdouble boundsMinY) {

//@line:13997

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt, ImPlotPoint(boundsMinX, boundsMinY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3FIIDDLjava_lang_String_2DDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY) {

//@line:14007

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt, ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3FIIDDLjava_lang_String_2DDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY, jint flags) {

//@line:14017

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt, ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3FIIDDDDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY, jint flags) {

//@line:14027

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, "%.1f", ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3DII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint rows, jint cols) {

//@line:14119

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3DIID(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint rows, jint cols, jdouble scaleMin) {

//@line:14127

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3DIIDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax) {

//@line:14135

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3DIIDDLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt) {

//@line:14143

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3DIIDDLjava_lang_String_2DD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt, jdouble boundsMinX, jdouble boundsMinY) {

//@line:14153

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt, ImPlotPoint(boundsMinX, boundsMinY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3DIIDDLjava_lang_String_2DDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY) {

//@line:14163

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt, ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3DIIDDLjava_lang_String_2DDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jstring obj_labelFmt, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY, jint flags) {

//@line:14173

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto labelFmt = obj_labelFmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelFmt, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, labelFmt, ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        if (labelFmt != NULL) env->ReleaseStringUTFChars(obj_labelFmt, labelFmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHeatmap__Ljava_lang_String_2_3DIIDDDDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint rows, jint cols, jdouble scaleMin, jdouble scaleMax, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY, jint flags) {

//@line:14183

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        ImPlot::PlotHeatmap(labelId, &values[0], rows, cols, scaleMin, scaleMax, "%.1f", ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values) {

//@line:14281

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint bins) {

//@line:14290

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3SID(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint bins, jdouble barScale) {

//@line:14299

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3SIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax) {

//@line:14308

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale, ImPlotRange(rangeMin, rangeMax));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3SIDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax, jint flags) {

//@line:14317

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale, ImPlotRange(rangeMin, rangeMax), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3SDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jdouble barScale, jdouble rangeMin, jdouble rangeMax, jint flags) {

//@line:14326

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), ImPlotBin_Sturges, barScale, ImPlotRange(rangeMin, rangeMax), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3SIDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint bins, jdouble barScale, jint flags) {

//@line:14335

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale, ImPlotRange(), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values) {

//@line:14434

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint bins) {

//@line:14443

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3IID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint bins, jdouble barScale) {

//@line:14452

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3IIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax) {

//@line:14461

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale, ImPlotRange(rangeMin, rangeMax));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3IIDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax, jint flags) {

//@line:14470

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale, ImPlotRange(rangeMin, rangeMax), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3IDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jdouble barScale, jdouble rangeMin, jdouble rangeMax, jint flags) {

//@line:14479

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), ImPlotBin_Sturges, barScale, ImPlotRange(rangeMin, rangeMax), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3IIDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint bins, jdouble barScale, jint flags) {

//@line:14488

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale, ImPlotRange(), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values) {

//@line:14587

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint bins) {

//@line:14596

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3JID(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint bins, jdouble barScale) {

//@line:14605

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3JIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax) {

//@line:14614

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale, ImPlotRange(rangeMin, rangeMax));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3JIDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax, jint flags) {

//@line:14623

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale, ImPlotRange(rangeMin, rangeMax), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3JDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jdouble barScale, jdouble rangeMin, jdouble rangeMax, jint flags) {

//@line:14632

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), ImPlotBin_Sturges, barScale, ImPlotRange(rangeMin, rangeMax), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3JIDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint bins, jdouble barScale, jint flags) {

//@line:14641

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale, ImPlotRange(), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values) {

//@line:14740

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint bins) {

//@line:14749

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3FID(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint bins, jdouble barScale) {

//@line:14758

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3FIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax) {

//@line:14767

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale, ImPlotRange(rangeMin, rangeMax));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3FIDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax, jint flags) {

//@line:14776

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale, ImPlotRange(rangeMin, rangeMax), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3FDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jdouble barScale, jdouble rangeMin, jdouble rangeMax, jint flags) {

//@line:14785

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), ImPlotBin_Sturges, barScale, ImPlotRange(rangeMin, rangeMax), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3FIDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint bins, jdouble barScale, jint flags) {

//@line:14794

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale, ImPlotRange(), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values) {

//@line:14893

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint bins) {

//@line:14902

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3DID(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint bins, jdouble barScale) {

//@line:14911

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3DIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax) {

//@line:14920

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale, ImPlotRange(rangeMin, rangeMax));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3DIDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax, jint flags) {

//@line:14929

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale, ImPlotRange(rangeMin, rangeMax), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3DDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jdouble barScale, jdouble rangeMin, jdouble rangeMax, jint flags) {

//@line:14938

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), ImPlotBin_Sturges, barScale, ImPlotRange(rangeMin, rangeMax), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram__Ljava_lang_String_2_3DIDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint bins, jdouble barScale, jint flags) {

//@line:14947

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], LEN(values), bins, barScale, ImPlotRange(), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count) {

//@line:15028

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3SII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jint bins) {

//@line:15037

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3SIID(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jint bins, jdouble barScale) {

//@line:15046

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3SIIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax) {

//@line:15055

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale, ImPlotRange(rangeMin, rangeMax));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3SIIDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax, jint flags) {

//@line:15064

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale, ImPlotRange(rangeMin, rangeMax), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3SIIDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_values, jint count, jint bins, jdouble barScale, jint flags) {

//@line:15073

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale, ImPlotRange(), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count) {

//@line:15154

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3III(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jint bins) {

//@line:15163

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3IIID(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jint bins, jdouble barScale) {

//@line:15172

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3IIIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax) {

//@line:15181

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale, ImPlotRange(rangeMin, rangeMax));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3IIIDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax, jint flags) {

//@line:15190

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale, ImPlotRange(rangeMin, rangeMax), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3IIIDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_values, jint count, jint bins, jdouble barScale, jint flags) {

//@line:15199

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale, ImPlotRange(), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count) {

//@line:15280

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3JII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jint bins) {

//@line:15289

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3JIID(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jint bins, jdouble barScale) {

//@line:15298

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3JIIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax) {

//@line:15307

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale, ImPlotRange(rangeMin, rangeMax));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3JIIDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax, jint flags) {

//@line:15316

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale, ImPlotRange(rangeMin, rangeMax), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3JIIDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_values, jint count, jint bins, jdouble barScale, jint flags) {

//@line:15325

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale, ImPlotRange(), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count) {

//@line:15406

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3FII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jint bins) {

//@line:15415

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3FIID(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jint bins, jdouble barScale) {

//@line:15424

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3FIIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax) {

//@line:15433

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale, ImPlotRange(rangeMin, rangeMax));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3FIIDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax, jint flags) {

//@line:15442

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale, ImPlotRange(rangeMin, rangeMax), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3FIIDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_values, jint count, jint bins, jdouble barScale, jint flags) {

//@line:15451

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale, ImPlotRange(), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count) {

//@line:15532

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3DII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jint bins) {

//@line:15541

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3DIID(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jint bins, jdouble barScale) {

//@line:15550

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3DIIDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax) {

//@line:15559

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale, ImPlotRange(rangeMin, rangeMax));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3DIIDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jint bins, jdouble barScale, jdouble rangeMin, jdouble rangeMax, jint flags) {

//@line:15568

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale, ImPlotRange(rangeMin, rangeMax), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogramV__Ljava_lang_String_2_3DIIDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_values, jint count, jint bins, jdouble barScale, jint flags) {

//@line:15577

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto values = obj_values == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_values, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram(labelId, &values[0], count, bins, barScale, ImPlotRange(), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (values != NULL) env->ReleasePrimitiveArrayCritical(obj_values, values, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3S_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys) {

//@line:15658

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint xBins) {

//@line:15669

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3S_3SII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint xBins, jint yBins) {

//@line:15680

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3S_3SIIDDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY) {

//@line:15691

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3S_3SIIDDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY, jint flags) {

//@line:15702

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3S_3SIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint xBins, jint yBins, jint flags) {

//@line:15713

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins, ImPlotRect(), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3I_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys) {

//@line:15796

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint xBins) {

//@line:15807

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3I_3III(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint xBins, jint yBins) {

//@line:15818

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3I_3IIIDDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY) {

//@line:15829

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3I_3IIIDDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY, jint flags) {

//@line:15840

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3I_3IIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint xBins, jint yBins, jint flags) {

//@line:15851

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins, ImPlotRect(), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3J_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys) {

//@line:15934

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint xBins) {

//@line:15945

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3J_3JII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint xBins, jint yBins) {

//@line:15956

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3J_3JIIDDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY) {

//@line:15967

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3J_3JIIDDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY, jint flags) {

//@line:15978

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3J_3JIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint xBins, jint yBins, jint flags) {

//@line:15989

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins, ImPlotRect(), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3F_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys) {

//@line:16072

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint xBins) {

//@line:16083

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3F_3FII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint xBins, jint yBins) {

//@line:16094

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3F_3FIIDDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY) {

//@line:16105

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3F_3FIIDDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY, jint flags) {

//@line:16116

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3F_3FIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint xBins, jint yBins, jint flags) {

//@line:16127

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins, ImPlotRect(), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3D_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys) {

//@line:16210

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint xBins) {

//@line:16221

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3D_3DII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint xBins, jint yBins) {

//@line:16232

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3D_3DIIDDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY) {

//@line:16243

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3D_3DIIDDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY, jint flags) {

//@line:16254

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2D__Ljava_lang_String_2_3D_3DIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint xBins, jint yBins, jint flags) {

//@line:16265

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], LEN(xs), xBins, yBins, ImPlotRect(), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count) {

//@line:16348

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3S_3SII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jint xBins) {

//@line:16359

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3S_3SIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jint xBins, jint yBins) {

//@line:16370

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3S_3SIIIDDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY) {

//@line:16381

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3S_3SIIIDDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY, jint flags) {

//@line:16392

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3S_3SIIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jint xBins, jint yBins, jint flags) {

//@line:16403

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins, ImPlotRect(), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count) {

//@line:16486

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3I_3III(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jint xBins) {

//@line:16497

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3I_3IIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jint xBins, jint yBins) {

//@line:16508

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3I_3IIIIDDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY) {

//@line:16519

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3I_3IIIIDDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY, jint flags) {

//@line:16530

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3I_3IIIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jint xBins, jint yBins, jint flags) {

//@line:16541

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins, ImPlotRect(), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count) {

//@line:16624

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3J_3JII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jint xBins) {

//@line:16635

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3J_3JIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jint xBins, jint yBins) {

//@line:16646

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3J_3JIIIDDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY) {

//@line:16657

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3J_3JIIIDDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY, jint flags) {

//@line:16668

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3J_3JIIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jint xBins, jint yBins, jint flags) {

//@line:16679

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins, ImPlotRect(), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count) {

//@line:16762

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3F_3FII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jint xBins) {

//@line:16773

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3F_3FIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jint xBins, jint yBins) {

//@line:16784

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3F_3FIIIDDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY) {

//@line:16795

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3F_3FIIIDDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY, jint flags) {

//@line:16806

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3F_3FIIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jint xBins, jint yBins, jint flags) {

//@line:16817

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins, ImPlotRect(), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count) {

//@line:16900

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3D_3DII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jint xBins) {

//@line:16911

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3D_3DIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jint xBins, jint yBins) {

//@line:16922

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3D_3DIIIDDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY) {

//@line:16933

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3D_3DIIIDDDDI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jint xBins, jint yBins, jdouble rangeMinX, jdouble rangeMinY, jdouble rangeMaxX, jdouble rangeMaxY, jint flags) {

//@line:16944

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins, ImPlotRect(rangeMinX, rangeMinY, rangeMaxX, rangeMaxY), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jdouble JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotHistogram2DV__Ljava_lang_String_2_3D_3DIIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jint xBins, jint yBins, jint flags) {

//@line:16955

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        auto _result = ImPlot::PlotHistogram2D(labelId, &xs[0], &ys[0], count, xBins, yBins, ImPlotRect(), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotDigital__Ljava_lang_String_2_3S_3S(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys) {

//@line:16987

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotDigital__Ljava_lang_String_2_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint flags) {

//@line:16997

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotDigital__Ljava_lang_String_2_3S_3SII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint flags, jint offset) {

//@line:17007

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], LEN(xs), flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotDigital__Ljava_lang_String_2_3I_3I(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys) {

//@line:17038

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotDigital__Ljava_lang_String_2_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint flags) {

//@line:17048

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotDigital__Ljava_lang_String_2_3I_3III(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint flags, jint offset) {

//@line:17058

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], LEN(xs), flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotDigital__Ljava_lang_String_2_3J_3J(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys) {

//@line:17089

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotDigital__Ljava_lang_String_2_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint flags) {

//@line:17099

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotDigital__Ljava_lang_String_2_3J_3JII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint flags, jint offset) {

//@line:17109

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], LEN(xs), flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotDigital__Ljava_lang_String_2_3F_3F(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys) {

//@line:17140

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotDigital__Ljava_lang_String_2_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint flags) {

//@line:17150

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotDigital__Ljava_lang_String_2_3F_3FII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint flags, jint offset) {

//@line:17160

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], LEN(xs), flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotDigital__Ljava_lang_String_2_3D_3D(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys) {

//@line:17191

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], LEN(xs));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotDigital__Ljava_lang_String_2_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint flags) {

//@line:17201

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], LEN(xs), flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotDigital__Ljava_lang_String_2_3D_3DII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint flags, jint offset) {

//@line:17211

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], LEN(xs), flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotDigitalV__Ljava_lang_String_2_3S_3SI(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count) {

//@line:17242

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotDigitalV__Ljava_lang_String_2_3S_3SII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jint flags) {

//@line:17252

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotDigitalV__Ljava_lang_String_2_3S_3SIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jshortArray obj_xs, jshortArray obj_ys, jint count, jint flags, jint offset) {

//@line:17262

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (short*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotDigitalV__Ljava_lang_String_2_3I_3II(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count) {

//@line:17293

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotDigitalV__Ljava_lang_String_2_3I_3III(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jint flags) {

//@line:17303

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotDigitalV__Ljava_lang_String_2_3I_3IIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jintArray obj_xs, jintArray obj_ys, jint count, jint flags, jint offset) {

//@line:17313

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotDigitalV__Ljava_lang_String_2_3J_3JI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count) {

//@line:17344

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotDigitalV__Ljava_lang_String_2_3J_3JII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jint flags) {

//@line:17354

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotDigitalV__Ljava_lang_String_2_3J_3JIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jlongArray obj_xs, jlongArray obj_ys, jint count, jint flags, jint offset) {

//@line:17364

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (long*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotDigitalV__Ljava_lang_String_2_3F_3FI(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count) {

//@line:17395

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotDigitalV__Ljava_lang_String_2_3F_3FII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jint flags) {

//@line:17405

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotDigitalV__Ljava_lang_String_2_3F_3FIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jfloatArray obj_xs, jfloatArray obj_ys, jint count, jint flags, jint offset) {

//@line:17415

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotDigitalV__Ljava_lang_String_2_3D_3DI(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count) {

//@line:17446

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], count);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotDigitalV__Ljava_lang_String_2_3D_3DII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jint flags) {

//@line:17456

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], count, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotDigitalV__Ljava_lang_String_2_3D_3DIII(JNIEnv* env, jclass clazz, jstring obj_labelId, jdoubleArray obj_xs, jdoubleArray obj_ys, jint count, jint flags, jint offset) {

//@line:17466

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto xs = obj_xs == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xs, JNI_FALSE);
        auto ys = obj_ys == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_ys, JNI_FALSE);
        ImPlot::PlotDigital(labelId, &xs[0], &ys[0], count, flags, offset);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        if (xs != NULL) env->ReleasePrimitiveArrayCritical(obj_xs, xs, JNI_FALSE);
        if (ys != NULL) env->ReleasePrimitiveArrayCritical(obj_ys, ys, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotImage__Ljava_lang_String_2JDDDD(JNIEnv* env, jclass clazz, jstring obj_labelId, jlong userTextureId, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY) {

//@line:17574

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        ImPlot::PlotImage(labelId, (ImTextureID)(uintptr_t)userTextureId, ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY));
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotImage__Ljava_lang_String_2JDDDDFF(JNIEnv* env, jclass clazz, jstring obj_labelId, jlong userTextureId, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY, jfloat uv0X, jfloat uv0Y) {

//@line:17580

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        ImVec2 uv0 = ImVec2(uv0X, uv0Y);
        ImPlot::PlotImage(labelId, (ImTextureID)(uintptr_t)userTextureId, ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY), uv0);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotImage__Ljava_lang_String_2JDDDDFFFF(JNIEnv* env, jclass clazz, jstring obj_labelId, jlong userTextureId, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY, jfloat uv0X, jfloat uv0Y, jfloat uv1X, jfloat uv1Y) {

//@line:17587

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        ImVec2 uv0 = ImVec2(uv0X, uv0Y);
        ImVec2 uv1 = ImVec2(uv1X, uv1Y);
        ImPlot::PlotImage(labelId, (ImTextureID)(uintptr_t)userTextureId, ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY), uv0, uv1);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotImage__Ljava_lang_String_2JDDDDFFFFFFFF(JNIEnv* env, jclass clazz, jstring obj_labelId, jlong userTextureId, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY, jfloat uv0X, jfloat uv0Y, jfloat uv1X, jfloat uv1Y, jfloat tintColX, jfloat tintColY, jfloat tintColZ, jfloat tintColW) {

//@line:17595

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        ImVec2 uv0 = ImVec2(uv0X, uv0Y);
        ImVec2 uv1 = ImVec2(uv1X, uv1Y);
        ImVec4 tintCol = ImVec4(tintColX, tintColY, tintColZ, tintColW);
        ImPlot::PlotImage(labelId, (ImTextureID)(uintptr_t)userTextureId, ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY), uv0, uv1, tintCol);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotImage__Ljava_lang_String_2JDDDDFFFFFFFFI(JNIEnv* env, jclass clazz, jstring obj_labelId, jlong userTextureId, jdouble boundsMinX, jdouble boundsMinY, jdouble boundsMaxX, jdouble boundsMaxY, jfloat uv0X, jfloat uv0Y, jfloat uv1X, jfloat uv1Y, jfloat tintColX, jfloat tintColY, jfloat tintColZ, jfloat tintColW, jint flags) {

//@line:17604

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        ImVec2 uv0 = ImVec2(uv0X, uv0Y);
        ImVec2 uv1 = ImVec2(uv1X, uv1Y);
        ImVec4 tintCol = ImVec4(tintColX, tintColY, tintColZ, tintColW);
        ImPlot::PlotImage(labelId, (ImTextureID)(uintptr_t)userTextureId, ImPlotPoint(boundsMinX, boundsMinY), ImPlotPoint(boundsMaxX, boundsMaxY), uv0, uv1, tintCol, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotText__Ljava_lang_String_2DD(JNIEnv* env, jclass clazz, jstring obj_text, jdouble x, jdouble y) {

//@line:17655

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        ImPlot::PlotText(text, x, y);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotText__Ljava_lang_String_2DDFF(JNIEnv* env, jclass clazz, jstring obj_text, jdouble x, jdouble y, jfloat pixOffsetX, jfloat pixOffsetY) {

//@line:17661

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        ImVec2 pixOffset = ImVec2(pixOffsetX, pixOffsetY);
        ImPlot::PlotText(text, x, y, pixOffset);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotText__Ljava_lang_String_2DDFFI(JNIEnv* env, jclass clazz, jstring obj_text, jdouble x, jdouble y, jfloat pixOffsetX, jfloat pixOffsetY, jint flags) {

//@line:17668

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        ImVec2 pixOffset = ImVec2(pixOffsetX, pixOffsetY);
        ImPlot::PlotText(text, x, y, pixOffset, flags);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotText__Ljava_lang_String_2DDI(JNIEnv* env, jclass clazz, jstring obj_text, jdouble x, jdouble y, jint flags) {

//@line:17675

        auto text = obj_text == NULL ? NULL : (char*)env->GetStringUTFChars(obj_text, JNI_FALSE);
        ImPlot::PlotText(text, x, y, ImVec2(0,0), flags);
        if (text != NULL) env->ReleaseStringUTFChars(obj_text, text);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotDummy__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_labelID) {

//@line:17695

        auto labelID = obj_labelID == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelID, JNI_FALSE);
        ImPlot::PlotDummy(labelID);
        if (labelID != NULL) env->ReleaseStringUTFChars(obj_labelID, labelID);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotDummy__Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_labelID, jint flags) {

//@line:17701

        auto labelID = obj_labelID == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelID, JNI_FALSE);
        ImPlot::PlotDummy(labelID, flags);
        if (labelID != NULL) env->ReleaseStringUTFChars(obj_labelID, labelID);
    
}


//@line:17707

        #undef LEN
        #undef long
     JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nDragPoint__I_3D_3DFFFF(JNIEnv* env, jclass clazz, jint id, jdoubleArray obj_x, jdoubleArray obj_y, jfloat colX, jfloat colY, jfloat colZ, jfloat colW) {

//@line:17776

        auto x = obj_x == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_x, JNI_FALSE);
        auto y = obj_y == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_y, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        auto _result = ImPlot::DragPoint(id, (x != NULL ? &x[0] : NULL), (y != NULL ? &y[0] : NULL), col);
        if (x != NULL) env->ReleasePrimitiveArrayCritical(obj_x, x, JNI_FALSE);
        if (y != NULL) env->ReleasePrimitiveArrayCritical(obj_y, y, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nDragPoint__I_3D_3DFFFFF(JNIEnv* env, jclass clazz, jint id, jdoubleArray obj_x, jdoubleArray obj_y, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jfloat size) {

//@line:17786

        auto x = obj_x == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_x, JNI_FALSE);
        auto y = obj_y == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_y, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        auto _result = ImPlot::DragPoint(id, (x != NULL ? &x[0] : NULL), (y != NULL ? &y[0] : NULL), col, size);
        if (x != NULL) env->ReleasePrimitiveArrayCritical(obj_x, x, JNI_FALSE);
        if (y != NULL) env->ReleasePrimitiveArrayCritical(obj_y, y, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nDragPoint__I_3D_3DFFFFFI(JNIEnv* env, jclass clazz, jint id, jdoubleArray obj_x, jdoubleArray obj_y, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jfloat size, jint flags) {

//@line:17796

        auto x = obj_x == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_x, JNI_FALSE);
        auto y = obj_y == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_y, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        auto _result = ImPlot::DragPoint(id, (x != NULL ? &x[0] : NULL), (y != NULL ? &y[0] : NULL), col, size, flags);
        if (x != NULL) env->ReleasePrimitiveArrayCritical(obj_x, x, JNI_FALSE);
        if (y != NULL) env->ReleasePrimitiveArrayCritical(obj_y, y, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nDragPoint__I_3D_3DFFFFI(JNIEnv* env, jclass clazz, jint id, jdoubleArray obj_x, jdoubleArray obj_y, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jint flags) {

//@line:17806

        auto x = obj_x == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_x, JNI_FALSE);
        auto y = obj_y == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_y, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        auto _result = ImPlot::DragPoint(id, (x != NULL ? &x[0] : NULL), (y != NULL ? &y[0] : NULL), col, 4, flags);
        if (x != NULL) env->ReleasePrimitiveArrayCritical(obj_x, x, JNI_FALSE);
        if (y != NULL) env->ReleasePrimitiveArrayCritical(obj_y, y, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nDragLineX__I_3DFFFF(JNIEnv* env, jclass clazz, jint id, jdoubleArray obj_x, jfloat colX, jfloat colY, jfloat colZ, jfloat colW) {

//@line:17872

        auto x = obj_x == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_x, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        auto _result = ImPlot::DragLineX(id, (x != NULL ? &x[0] : NULL), col);
        if (x != NULL) env->ReleasePrimitiveArrayCritical(obj_x, x, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nDragLineX__I_3DFFFFF(JNIEnv* env, jclass clazz, jint id, jdoubleArray obj_x, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jfloat thickness) {

//@line:17880

        auto x = obj_x == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_x, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        auto _result = ImPlot::DragLineX(id, (x != NULL ? &x[0] : NULL), col, thickness);
        if (x != NULL) env->ReleasePrimitiveArrayCritical(obj_x, x, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nDragLineX__I_3DFFFFFI(JNIEnv* env, jclass clazz, jint id, jdoubleArray obj_x, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jfloat thickness, jint flags) {

//@line:17888

        auto x = obj_x == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_x, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        auto _result = ImPlot::DragLineX(id, (x != NULL ? &x[0] : NULL), col, thickness, flags);
        if (x != NULL) env->ReleasePrimitiveArrayCritical(obj_x, x, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nDragLineX__I_3DFFFFI(JNIEnv* env, jclass clazz, jint id, jdoubleArray obj_x, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jint flags) {

//@line:17896

        auto x = obj_x == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_x, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        auto _result = ImPlot::DragLineX(id, (x != NULL ? &x[0] : NULL), col, 1, flags);
        if (x != NULL) env->ReleasePrimitiveArrayCritical(obj_x, x, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nDragLineY__I_3DFFFF(JNIEnv* env, jclass clazz, jint id, jdoubleArray obj_y, jfloat colX, jfloat colY, jfloat colZ, jfloat colW) {

//@line:17960

        auto y = obj_y == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_y, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        auto _result = ImPlot::DragLineY(id, (y != NULL ? &y[0] : NULL), col);
        if (y != NULL) env->ReleasePrimitiveArrayCritical(obj_y, y, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nDragLineY__I_3DFFFFF(JNIEnv* env, jclass clazz, jint id, jdoubleArray obj_y, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jfloat thickness) {

//@line:17968

        auto y = obj_y == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_y, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        auto _result = ImPlot::DragLineY(id, (y != NULL ? &y[0] : NULL), col, thickness);
        if (y != NULL) env->ReleasePrimitiveArrayCritical(obj_y, y, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nDragLineY__I_3DFFFFFI(JNIEnv* env, jclass clazz, jint id, jdoubleArray obj_y, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jfloat thickness, jint flags) {

//@line:17976

        auto y = obj_y == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_y, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        auto _result = ImPlot::DragLineY(id, (y != NULL ? &y[0] : NULL), col, thickness, flags);
        if (y != NULL) env->ReleasePrimitiveArrayCritical(obj_y, y, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nDragLineY__I_3DFFFFI(JNIEnv* env, jclass clazz, jint id, jdoubleArray obj_y, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jint flags) {

//@line:17984

        auto y = obj_y == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_y, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        auto _result = ImPlot::DragLineY(id, (y != NULL ? &y[0] : NULL), col, 1, flags);
        if (y != NULL) env->ReleasePrimitiveArrayCritical(obj_y, y, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nDragRect__I_3D_3D_3D_3DFFFF(JNIEnv* env, jclass clazz, jint id, jdoubleArray obj_xMin, jdoubleArray obj_yMin, jdoubleArray obj_xMax, jdoubleArray obj_yMax, jfloat colX, jfloat colY, jfloat colZ, jfloat colW) {

//@line:18020

        auto xMin = obj_xMin == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xMin, JNI_FALSE);
        auto yMin = obj_yMin == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_yMin, JNI_FALSE);
        auto xMax = obj_xMax == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xMax, JNI_FALSE);
        auto yMax = obj_yMax == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_yMax, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        auto _result = ImPlot::DragRect(id, (xMin != NULL ? &xMin[0] : NULL), (yMin != NULL ? &yMin[0] : NULL), (xMax != NULL ? &xMax[0] : NULL), (yMax != NULL ? &yMax[0] : NULL), col);
        if (xMin != NULL) env->ReleasePrimitiveArrayCritical(obj_xMin, xMin, JNI_FALSE);
        if (yMin != NULL) env->ReleasePrimitiveArrayCritical(obj_yMin, yMin, JNI_FALSE);
        if (xMax != NULL) env->ReleasePrimitiveArrayCritical(obj_xMax, xMax, JNI_FALSE);
        if (yMax != NULL) env->ReleasePrimitiveArrayCritical(obj_yMax, yMax, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nDragRect__I_3D_3D_3D_3DFFFFI(JNIEnv* env, jclass clazz, jint id, jdoubleArray obj_xMin, jdoubleArray obj_yMin, jdoubleArray obj_xMax, jdoubleArray obj_yMax, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jint flags) {

//@line:18034

        auto xMin = obj_xMin == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xMin, JNI_FALSE);
        auto yMin = obj_yMin == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_yMin, JNI_FALSE);
        auto xMax = obj_xMax == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_xMax, JNI_FALSE);
        auto yMax = obj_yMax == NULL ? NULL : (double*)env->GetPrimitiveArrayCritical(obj_yMax, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        auto _result = ImPlot::DragRect(id, (xMin != NULL ? &xMin[0] : NULL), (yMin != NULL ? &yMin[0] : NULL), (xMax != NULL ? &xMax[0] : NULL), (yMax != NULL ? &yMax[0] : NULL), col, flags);
        if (xMin != NULL) env->ReleasePrimitiveArrayCritical(obj_xMin, xMin, JNI_FALSE);
        if (yMin != NULL) env->ReleasePrimitiveArrayCritical(obj_yMin, yMin, JNI_FALSE);
        if (xMax != NULL) env->ReleasePrimitiveArrayCritical(obj_xMax, xMax, JNI_FALSE);
        if (yMax != NULL) env->ReleasePrimitiveArrayCritical(obj_yMax, yMax, JNI_FALSE);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nAnnotation__DDFFFFFFZ(JNIEnv* env, jclass clazz, jdouble x, jdouble y, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jfloat pixOffsetX, jfloat pixOffsetY, jboolean clamp) {

//@line:18080

        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImVec2 pixOffset = ImVec2(pixOffsetX, pixOffsetY);
        ImPlot::Annotation(x, y, col, pixOffset, clamp);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nAnnotation__DDFFFFFFZZ(JNIEnv* env, jclass clazz, jdouble x, jdouble y, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jfloat pixOffsetX, jfloat pixOffsetY, jboolean clamp, jboolean round) {

//@line:18086

        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImVec2 pixOffset = ImVec2(pixOffsetX, pixOffsetY);
        ImPlot::Annotation(x, y, col, pixOffset, clamp, round);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nAnnotation__DDFFFFFFZLjava_lang_String_2(JNIEnv* env, jclass clazz, jdouble x, jdouble y, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jfloat pixOffsetX, jfloat pixOffsetY, jboolean clamp, jstring obj_fmt) {

//@line:18108

        auto fmt = obj_fmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_fmt, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImVec2 pixOffset = ImVec2(pixOffsetX, pixOffsetY);
        ImPlot::Annotation(x, y, col, pixOffset, clamp, fmt, NULL);
        if (fmt != NULL) env->ReleaseStringUTFChars(obj_fmt, fmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nTagX__DFFFF(JNIEnv* env, jclass clazz, jdouble x, jfloat colX, jfloat colY, jfloat colZ, jfloat colW) {

//@line:18144

        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImPlot::TagX(x, col);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nTagX__DFFFFZ(JNIEnv* env, jclass clazz, jdouble x, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jboolean round) {

//@line:18149

        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImPlot::TagX(x, col, round);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nTagX__DFFFFLjava_lang_String_2(JNIEnv* env, jclass clazz, jdouble x, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jstring obj_fmt) {

//@line:18168

        auto fmt = obj_fmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_fmt, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImPlot::TagX(x, col, fmt, NULL);
        if (fmt != NULL) env->ReleaseStringUTFChars(obj_fmt, fmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nTagY__DFFFF(JNIEnv* env, jclass clazz, jdouble y, jfloat colX, jfloat colY, jfloat colZ, jfloat colW) {

//@line:18203

        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImPlot::TagY(y, col);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nTagY__DFFFFZ(JNIEnv* env, jclass clazz, jdouble y, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jboolean round) {

//@line:18208

        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImPlot::TagY(y, col, round);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nTagY__DFFFFLjava_lang_String_2(JNIEnv* env, jclass clazz, jdouble y, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jstring obj_fmt) {

//@line:18227

        auto fmt = obj_fmt == NULL ? NULL : (char*)env->GetStringUTFChars(obj_fmt, JNI_FALSE);
        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImPlot::TagY(y, col, fmt, NULL);
        if (fmt != NULL) env->ReleaseStringUTFChars(obj_fmt, fmt);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetAxis(JNIEnv* env, jclass clazz, jint axis) {


//@line:18245

        ImPlot::SetAxis(axis);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetAxes(JNIEnv* env, jclass clazz, jint xAxis, jint yAxis) {


//@line:18256

        ImPlot::SetAxes(xAxis, yAxis);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPixelsToPlot__Limgui_moulberry90_extension_implot_ImPlotPoint_2FF(JNIEnv* env, jclass clazz, jobject dst, jfloat pixX, jfloat pixY) {

//@line:18368

        ImVec2 pix = ImVec2(pixX, pixY);
        Jni::ImPlotPointCpy(env, ImPlot::PixelsToPlot(pix), dst);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPixelsToPlot__Limgui_moulberry90_extension_implot_ImPlotPoint_2FFI(JNIEnv* env, jclass clazz, jobject dst, jfloat pixX, jfloat pixY, jint xAxis) {

//@line:18373

        ImVec2 pix = ImVec2(pixX, pixY);
        Jni::ImPlotPointCpy(env, ImPlot::PixelsToPlot(pix, xAxis), dst);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPixelsToPlot__Limgui_moulberry90_extension_implot_ImPlotPoint_2FFII(JNIEnv* env, jclass clazz, jobject dst, jfloat pixX, jfloat pixY, jint xAxis, jint yAxis) {

//@line:18378

        ImVec2 pix = ImVec2(pixX, pixY);
        Jni::ImPlotPointCpy(env, ImPlot::PixelsToPlot(pix, xAxis, yAxis), dst);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotToPixels__Limgui_moulberry90_ImVec2_2DD(JNIEnv* env, jclass clazz, jobject dst, jdouble pltX, jdouble pltY) {


//@line:18539

        Jni::ImVec2Cpy(env, ImPlot::PlotToPixels(ImPlotPoint(pltX, pltY)), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotToPixelsX__DD(JNIEnv* env, jclass clazz, jdouble pltX, jdouble pltY) {


//@line:18543

        return ImPlot::PlotToPixels(ImPlotPoint(pltX, pltY)).x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotToPixelsY__DD(JNIEnv* env, jclass clazz, jdouble pltX, jdouble pltY) {


//@line:18547

        return ImPlot::PlotToPixels(ImPlotPoint(pltX, pltY)).y;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotToPixels__Limgui_moulberry90_ImVec2_2DDI(JNIEnv* env, jclass clazz, jobject dst, jdouble pltX, jdouble pltY, jint xAxis) {


//@line:18551

        Jni::ImVec2Cpy(env, ImPlot::PlotToPixels(ImPlotPoint(pltX, pltY), xAxis), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotToPixelsX__DDI(JNIEnv* env, jclass clazz, jdouble pltX, jdouble pltY, jint xAxis) {


//@line:18555

        return ImPlot::PlotToPixels(ImPlotPoint(pltX, pltY), xAxis).x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotToPixelsY__DDI(JNIEnv* env, jclass clazz, jdouble pltX, jdouble pltY, jint xAxis) {


//@line:18559

        return ImPlot::PlotToPixels(ImPlotPoint(pltX, pltY), xAxis).y;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotToPixels__Limgui_moulberry90_ImVec2_2DDII(JNIEnv* env, jclass clazz, jobject dst, jdouble pltX, jdouble pltY, jint xAxis, jint yAxis) {


//@line:18563

        Jni::ImVec2Cpy(env, ImPlot::PlotToPixels(ImPlotPoint(pltX, pltY), xAxis, yAxis), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotToPixelsX__DDII(JNIEnv* env, jclass clazz, jdouble pltX, jdouble pltY, jint xAxis, jint yAxis) {


//@line:18567

        return ImPlot::PlotToPixels(ImPlotPoint(pltX, pltY), xAxis, yAxis).x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPlotToPixelsY__DDII(JNIEnv* env, jclass clazz, jdouble pltX, jdouble pltY, jint xAxis, jint yAxis) {


//@line:18571

        return ImPlot::PlotToPixels(ImPlotPoint(pltX, pltY), xAxis, yAxis).y;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetPlotPos(JNIEnv* env, jclass clazz, jobject dst) {


//@line:18605

        Jni::ImVec2Cpy(env, ImPlot::GetPlotPos(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetPlotPosX(JNIEnv* env, jclass clazz) {


//@line:18609

        return ImPlot::GetPlotPos().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetPlotPosY(JNIEnv* env, jclass clazz) {


//@line:18613

        return ImPlot::GetPlotPos().y;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetPlotSize(JNIEnv* env, jclass clazz, jobject dst) {


//@line:18647

        Jni::ImVec2Cpy(env, ImPlot::GetPlotSize(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetPlotSizeX(JNIEnv* env, jclass clazz) {


//@line:18651

        return ImPlot::GetPlotSize().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetPlotSizeY(JNIEnv* env, jclass clazz) {


//@line:18655

        return ImPlot::GetPlotSize().y;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetPlotMousePos__Limgui_moulberry90_extension_implot_ImPlotPoint_2(JNIEnv* env, jclass clazz, jobject dst) {


//@line:18713

        Jni::ImPlotPointCpy(env, ImPlot::GetPlotMousePos(), dst);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetPlotMousePos__Limgui_moulberry90_extension_implot_ImPlotPoint_2I(JNIEnv* env, jclass clazz, jobject dst, jint xAxis) {


//@line:18717

        Jni::ImPlotPointCpy(env, ImPlot::GetPlotMousePos(xAxis), dst);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetPlotMousePos__Limgui_moulberry90_extension_implot_ImPlotPoint_2II(JNIEnv* env, jclass clazz, jobject dst, jint xAxis, jint yAxis) {


//@line:18721

        Jni::ImPlotPointCpy(env, ImPlot::GetPlotMousePos(xAxis, yAxis), dst);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetPlotLimits__Limgui_moulberry90_extension_implot_ImPlotRect_2(JNIEnv* env, jclass clazz, jobject dst) {


//@line:18773

        Jni::ImPlotRectCpy(env, ImPlot::GetPlotLimits(), dst);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetPlotLimits__Limgui_moulberry90_extension_implot_ImPlotRect_2I(JNIEnv* env, jclass clazz, jobject dst, jint xAxis) {


//@line:18777

        Jni::ImPlotRectCpy(env, ImPlot::GetPlotLimits(xAxis), dst);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetPlotLimits__Limgui_moulberry90_extension_implot_ImPlotRect_2II(JNIEnv* env, jclass clazz, jobject dst, jint xAxis, jint yAxis) {


//@line:18781

        Jni::ImPlotRectCpy(env, ImPlot::GetPlotLimits(xAxis, yAxis), dst);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nIsPlotHovered(JNIEnv* env, jclass clazz) {


//@line:18792

        return ImPlot::IsPlotHovered();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nIsAxisHovered(JNIEnv* env, jclass clazz, jint axis) {


//@line:18803

        return ImPlot::IsAxisHovered(axis);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nIsSubplotsHovered(JNIEnv* env, jclass clazz) {


//@line:18814

        return ImPlot::IsSubplotsHovered();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nIsPlotSelected(JNIEnv* env, jclass clazz) {


//@line:18825

        return ImPlot::IsPlotSelected();
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetPlotSelection__Limgui_moulberry90_extension_implot_ImPlotRect_2(JNIEnv* env, jclass clazz, jobject dst) {


//@line:18883

        Jni::ImPlotRectCpy(env, ImPlot::GetPlotSelection(), dst);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetPlotSelection__Limgui_moulberry90_extension_implot_ImPlotRect_2I(JNIEnv* env, jclass clazz, jobject dst, jint xAxis) {


//@line:18887

        Jni::ImPlotRectCpy(env, ImPlot::GetPlotSelection(xAxis), dst);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetPlotSelection__Limgui_moulberry90_extension_implot_ImPlotRect_2II(JNIEnv* env, jclass clazz, jobject dst, jint xAxis, jint yAxis) {


//@line:18891

        Jni::ImPlotRectCpy(env, ImPlot::GetPlotSelection(xAxis, yAxis), dst);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nCancelPlotSelection(JNIEnv* env, jclass clazz) {


//@line:18902

        ImPlot::CancelPlotSelection();
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nHideNextItem__(JNIEnv* env, jclass clazz) {


//@line:18938

        ImPlot::HideNextItem();
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nHideNextItem__Z(JNIEnv* env, jclass clazz, jboolean hidden) {


//@line:18942

        ImPlot::HideNextItem(hidden);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nHideNextItem__ZI(JNIEnv* env, jclass clazz, jboolean hidden, jint cond) {


//@line:18946

        ImPlot::HideNextItem(hidden, cond);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nHideNextItem__I(JNIEnv* env, jclass clazz, jint cond) {


//@line:18950

        ImPlot::HideNextItem(true, cond);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nBeginAlignedPlots__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_groupId) {

//@line:18975

        auto groupId = obj_groupId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_groupId, JNI_FALSE);
        auto _result = ImPlot::BeginAlignedPlots(groupId);
        if (groupId != NULL) env->ReleaseStringUTFChars(obj_groupId, groupId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nBeginAlignedPlots__Ljava_lang_String_2Z(JNIEnv* env, jclass clazz, jstring obj_groupId, jboolean vertical) {

//@line:18982

        auto groupId = obj_groupId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_groupId, JNI_FALSE);
        auto _result = ImPlot::BeginAlignedPlots(groupId, vertical);
        if (groupId != NULL) env->ReleaseStringUTFChars(obj_groupId, groupId);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nEndAlignedPlots(JNIEnv* env, jclass clazz) {


//@line:18996

        ImPlot::EndAlignedPlots();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nBeginLegendPopup__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_labelId) {

//@line:19018

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto _result = ImPlot::BeginLegendPopup(labelId);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nBeginLegendPopup__Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_labelId, jint mouseButton) {

//@line:19025

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto _result = ImPlot::BeginLegendPopup(labelId, mouseButton);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nEndLegendPopup(JNIEnv* env, jclass clazz) {


//@line:19039

        ImPlot::EndLegendPopup();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nIsLegendEntryHovered(JNIEnv* env, jclass clazz, jstring obj_labelId) {

//@line:19050

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto _result = ImPlot::IsLegendEntryHovered(labelId);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nBeginDragDropTargetPlot(JNIEnv* env, jclass clazz) {


//@line:19069

        return ImPlot::BeginDragDropTargetPlot();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nBeginDragDropTargetAxis(JNIEnv* env, jclass clazz, jint axis) {


//@line:19081

        return ImPlot::BeginDragDropTargetAxis(axis);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nBeginDragDropTargetLegend(JNIEnv* env, jclass clazz) {


//@line:19093

        return ImPlot::BeginDragDropTargetLegend();
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nEndDragDropTarget(JNIEnv* env, jclass clazz) {


//@line:19104

        ImPlot::EndDragDropTarget();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nBeginDragDropSourcePlot__(JNIEnv* env, jclass clazz) {


//@line:19127

        return ImPlot::BeginDragDropSourcePlot();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nBeginDragDropSourcePlot__I(JNIEnv* env, jclass clazz, jint flags) {


//@line:19131

        return ImPlot::BeginDragDropSourcePlot(flags);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nBeginDragDropSourceAxis__I(JNIEnv* env, jclass clazz, jint axis) {


//@line:19151

        return ImPlot::BeginDragDropSourceAxis(axis);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nBeginDragDropSourceAxis__II(JNIEnv* env, jclass clazz, jint axis, jint flags) {


//@line:19155

        return ImPlot::BeginDragDropSourceAxis(axis, flags);
    

}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nBeginDragDropSourceItem__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_labelId) {

//@line:19175

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto _result = ImPlot::BeginDragDropSourceItem(labelId);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nBeginDragDropSourceItem__Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_labelId, jint flags) {

//@line:19182

        auto labelId = obj_labelId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_labelId, JNI_FALSE);
        auto _result = ImPlot::BeginDragDropSourceItem(labelId, flags);
        if (labelId != NULL) env->ReleaseStringUTFChars(obj_labelId, labelId);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nEndDragDropSource(JNIEnv* env, jclass clazz) {


//@line:19196

        ImPlot::EndDragDropSource();
    

}

JNIEXPORT jlong JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetStyle(JNIEnv* env, jclass clazz) {


//@line:19243

        return (uintptr_t)&ImPlot::GetStyle();
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nStyleColorsAuto__(JNIEnv* env, jclass clazz) {


//@line:19261

        ImPlot::StyleColorsAuto();
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nStyleColorsAuto__J(JNIEnv* env, jclass clazz, jlong dst) {


//@line:19265

        ImPlot::StyleColorsAuto(reinterpret_cast<ImPlotStyle*>(dst));
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nStyleColorsClassic__(JNIEnv* env, jclass clazz) {


//@line:19283

        ImPlot::StyleColorsClassic();
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nStyleColorsClassic__J(JNIEnv* env, jclass clazz, jlong dst) {


//@line:19287

        ImPlot::StyleColorsClassic(reinterpret_cast<ImPlotStyle*>(dst));
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nStyleColorsDark__(JNIEnv* env, jclass clazz) {


//@line:19305

        ImPlot::StyleColorsDark();
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nStyleColorsDark__J(JNIEnv* env, jclass clazz, jlong dst) {


//@line:19309

        ImPlot::StyleColorsDark(reinterpret_cast<ImPlotStyle*>(dst));
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nStyleColorsLight__(JNIEnv* env, jclass clazz) {


//@line:19327

        ImPlot::StyleColorsLight();
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nStyleColorsLight__J(JNIEnv* env, jclass clazz, jlong dst) {


//@line:19331

        ImPlot::StyleColorsLight(reinterpret_cast<ImPlotStyle*>(dst));
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_pushStyleColor(JNIEnv* env, jclass clazz, jint idx, jlong col) {


//@line:19342

        ImPlot::PushStyleColor(idx, col);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPushStyleColor__II(JNIEnv* env, jclass clazz, jint idx, jint col) {


//@line:19353

        ImPlot::PushStyleColor(idx, static_cast<ImU32>(col));
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPushStyleColor__IFFFF(JNIEnv* env, jclass clazz, jint idx, jfloat colX, jfloat colY, jfloat colZ, jfloat colW) {

//@line:19371

        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImPlot::PushStyleColor(idx, col);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPopStyleColor__(JNIEnv* env, jclass clazz) {


//@line:19384

        ImPlot::PopStyleColor();
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPopStyleColor__I(JNIEnv* env, jclass clazz, jint count) {


//@line:19388

        ImPlot::PopStyleColor(count);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPushStyleVar__IF(JNIEnv* env, jclass clazz, jint idx, jfloat val) {


//@line:19399

        ImPlot::PushStyleVar(idx, static_cast<float>(val));
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPushStyleVar__II(JNIEnv* env, jclass clazz, jint idx, jint val) {


//@line:19410

        ImPlot::PushStyleVar(idx, static_cast<int>(val));
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPushStyleVar__IFF(JNIEnv* env, jclass clazz, jint idx, jfloat valX, jfloat valY) {

//@line:19428

        ImVec2 val = ImVec2(valX, valY);
        ImPlot::PushStyleVar(idx, val);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPopStyleVar__(JNIEnv* env, jclass clazz) {


//@line:19447

        ImPlot::PopStyleVar();
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPopStyleVar__I(JNIEnv* env, jclass clazz, jint count) {


//@line:19451

        ImPlot::PopStyleVar(count);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetNextLineStyle__(JNIEnv* env, jclass clazz) {


//@line:19497

        ImPlot::SetNextLineStyle();
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetNextLineStyle__FFFF(JNIEnv* env, jclass clazz, jfloat colX, jfloat colY, jfloat colZ, jfloat colW) {

//@line:19501

        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImPlot::SetNextLineStyle(col);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetNextLineStyle__FFFFF(JNIEnv* env, jclass clazz, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jfloat weight) {

//@line:19506

        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImPlot::SetNextLineStyle(col, weight);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetNextLineStyle__F(JNIEnv* env, jclass clazz, jfloat weight) {


//@line:19511

        ImPlot::SetNextLineStyle(IMPLOT_AUTO_COL, weight);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetNextFillStyle__(JNIEnv* env, jclass clazz) {


//@line:19557

        ImPlot::SetNextFillStyle();
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetNextFillStyle__FFFF(JNIEnv* env, jclass clazz, jfloat colX, jfloat colY, jfloat colZ, jfloat colW) {

//@line:19561

        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImPlot::SetNextFillStyle(col);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetNextFillStyle__FFFFF(JNIEnv* env, jclass clazz, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jfloat alphaMod) {

//@line:19566

        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImPlot::SetNextFillStyle(col, alphaMod);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetNextFillStyle__F(JNIEnv* env, jclass clazz, jfloat alphaMod) {


//@line:19571

        ImPlot::SetNextFillStyle(IMPLOT_AUTO_COL, alphaMod);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetNextMarkerStyle__(JNIEnv* env, jclass clazz) {


//@line:19652

        ImPlot::SetNextMarkerStyle();
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetNextMarkerStyle__I(JNIEnv* env, jclass clazz, jint marker) {


//@line:19656

        ImPlot::SetNextMarkerStyle(marker);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetNextMarkerStyle__IF(JNIEnv* env, jclass clazz, jint marker, jfloat size) {


//@line:19660

        ImPlot::SetNextMarkerStyle(marker, size);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetNextMarkerStyle__IFFFFF(JNIEnv* env, jclass clazz, jint marker, jfloat size, jfloat fillX, jfloat fillY, jfloat fillZ, jfloat fillW) {

//@line:19664

        ImVec4 fill = ImVec4(fillX, fillY, fillZ, fillW);
        ImPlot::SetNextMarkerStyle(marker, size, fill);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetNextMarkerStyle__IFFFFFF(JNIEnv* env, jclass clazz, jint marker, jfloat size, jfloat fillX, jfloat fillY, jfloat fillZ, jfloat fillW, jfloat weight) {

//@line:19669

        ImVec4 fill = ImVec4(fillX, fillY, fillZ, fillW);
        ImPlot::SetNextMarkerStyle(marker, size, fill, weight);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetNextMarkerStyle__IFFFFFFFFFF(JNIEnv* env, jclass clazz, jint marker, jfloat size, jfloat fillX, jfloat fillY, jfloat fillZ, jfloat fillW, jfloat weight, jfloat outlineX, jfloat outlineY, jfloat outlineZ, jfloat outlineW) {

//@line:19674

        ImVec4 fill = ImVec4(fillX, fillY, fillZ, fillW);
        ImVec4 outline = ImVec4(outlineX, outlineY, outlineZ, outlineW);
        ImPlot::SetNextMarkerStyle(marker, size, fill, weight, outline);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetNextMarkerStyle__IFFFFFFFFF(JNIEnv* env, jclass clazz, jint marker, jfloat size, jfloat fillX, jfloat fillY, jfloat fillZ, jfloat fillW, jfloat outlineX, jfloat outlineY, jfloat outlineZ, jfloat outlineW) {

//@line:19680

        ImVec4 fill = ImVec4(fillX, fillY, fillZ, fillW);
        ImVec4 outline = ImVec4(outlineX, outlineY, outlineZ, outlineW);
        ImPlot::SetNextMarkerStyle(marker, size, fill, IMPLOT_AUTO, outline);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetNextErrorBarStyle__(JNIEnv* env, jclass clazz) {


//@line:19742

        ImPlot::SetNextErrorBarStyle();
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetNextErrorBarStyle__FFFF(JNIEnv* env, jclass clazz, jfloat colX, jfloat colY, jfloat colZ, jfloat colW) {

//@line:19746

        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImPlot::SetNextErrorBarStyle(col);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetNextErrorBarStyle__FFFFF(JNIEnv* env, jclass clazz, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jfloat size) {

//@line:19751

        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImPlot::SetNextErrorBarStyle(col, size);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetNextErrorBarStyle__FFFFFF(JNIEnv* env, jclass clazz, jfloat colX, jfloat colY, jfloat colZ, jfloat colW, jfloat size, jfloat weight) {

//@line:19756

        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImPlot::SetNextErrorBarStyle(col, size, weight);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSetNextErrorBarStyle__FF(JNIEnv* env, jclass clazz, jfloat size, jfloat weight) {


//@line:19761

        ImPlot::SetNextErrorBarStyle(IMPLOT_AUTO_COL, size, weight);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetLastItemColor(JNIEnv* env, jclass clazz, jobject dst) {


//@line:19809

        Jni::ImVec4Cpy(env, ImPlot::GetLastItemColor(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetLastItemColorX(JNIEnv* env, jclass clazz) {


//@line:19813

        return ImPlot::GetLastItemColor().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetLastItemColorY(JNIEnv* env, jclass clazz) {


//@line:19817

        return ImPlot::GetLastItemColor().y;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetLastItemColorZ(JNIEnv* env, jclass clazz) {


//@line:19821

        return ImPlot::GetLastItemColor().z;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetLastItemColorW(JNIEnv* env, jclass clazz) {


//@line:19825

        return ImPlot::GetLastItemColor().w;
    

}

JNIEXPORT jstring JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetStyleColorName(JNIEnv* env, jclass clazz, jint idx) {


//@line:19836

        return env->NewStringUTF(ImPlot::GetStyleColorName(idx));
    

}

JNIEXPORT jstring JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetMarkerName(JNIEnv* env, jclass clazz, jint idx) {


//@line:19847

        return env->NewStringUTF(ImPlot::GetMarkerName(idx));
    

}

JNIEXPORT jint JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nAddColormap__Ljava_lang_String_2_3Limgui_moulberry90_ImVec4_2(JNIEnv* env, jclass clazz, jstring obj_name, jobjectArray obj_cols) {

//@line:19879

        auto name = obj_name == NULL ? NULL : (char*)env->GetStringUTFChars(obj_name, JNI_FALSE);
        int colsLength = env->GetArrayLength(obj_cols);
        ImVec4 cols[colsLength];
        for (int i = 0; i < colsLength; i++) {
            jobject src = env->GetObjectArrayElement(obj_cols, i);
            ImVec4 dst;
            Jni::ImVec4Cpy(env, src, &dst);
            cols[i] = dst;
        };
        auto _result = ImPlot::AddColormap(name, cols, env->GetArrayLength(obj_cols));
        if (name != NULL) env->ReleaseStringUTFChars(obj_name, name);
        return _result;
    
}

JNIEXPORT jint JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nAddColormap__Ljava_lang_String_2_3Limgui_moulberry90_ImVec4_2Z(JNIEnv* env, jclass clazz, jstring obj_name, jobjectArray obj_cols, jboolean qual) {

//@line:19894

        auto name = obj_name == NULL ? NULL : (char*)env->GetStringUTFChars(obj_name, JNI_FALSE);
        int colsLength = env->GetArrayLength(obj_cols);
        ImVec4 cols[colsLength];
        for (int i = 0; i < colsLength; i++) {
            jobject src = env->GetObjectArrayElement(obj_cols, i);
            ImVec4 dst;
            Jni::ImVec4Cpy(env, src, &dst);
            cols[i] = dst;
        };
        auto _result = ImPlot::AddColormap(name, cols, env->GetArrayLength(obj_cols), qual);
        if (name != NULL) env->ReleaseStringUTFChars(obj_name, name);
        return _result;
    
}

JNIEXPORT jint JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nAddColormap__Ljava_lang_String_2_3I(JNIEnv* env, jclass clazz, jstring obj_name, jintArray obj_cols) {

//@line:19917

        auto name = obj_name == NULL ? NULL : (char*)env->GetStringUTFChars(obj_name, JNI_FALSE);
        auto cols = obj_cols == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_cols, JNI_FALSE);
        auto _result = ImPlot::AddColormap(name, reinterpret_cast<ImU32*>(&cols[0]), env->GetArrayLength(obj_cols));
        if (name != NULL) env->ReleaseStringUTFChars(obj_name, name);
        if (cols != NULL) env->ReleasePrimitiveArrayCritical(obj_cols, cols, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jint JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nAddColormap__Ljava_lang_String_2_3IZ(JNIEnv* env, jclass clazz, jstring obj_name, jintArray obj_cols, jboolean qual) {

//@line:19926

        auto name = obj_name == NULL ? NULL : (char*)env->GetStringUTFChars(obj_name, JNI_FALSE);
        auto cols = obj_cols == NULL ? NULL : (int*)env->GetPrimitiveArrayCritical(obj_cols, JNI_FALSE);
        auto _result = ImPlot::AddColormap(name, reinterpret_cast<ImU32*>(&cols[0]), env->GetArrayLength(obj_cols), qual);
        if (name != NULL) env->ReleaseStringUTFChars(obj_name, name);
        if (cols != NULL) env->ReleasePrimitiveArrayCritical(obj_cols, cols, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jint JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetColormapCount(JNIEnv* env, jclass clazz) {


//@line:19942

        return ImPlot::GetColormapCount();
    

}

JNIEXPORT jstring JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetColormapName(JNIEnv* env, jclass clazz, jint cmap) {


//@line:19953

        return env->NewStringUTF(ImPlot::GetColormapName(cmap));
    

}

JNIEXPORT jint JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetColormapIndex(JNIEnv* env, jclass clazz, jstring obj_name) {

//@line:19964

        auto name = obj_name == NULL ? NULL : (char*)env->GetStringUTFChars(obj_name, JNI_FALSE);
        auto _result = ImPlot::GetColormapIndex(name);
        if (name != NULL) env->ReleaseStringUTFChars(obj_name, name);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPushColormap__I(JNIEnv* env, jclass clazz, jint cmap) {


//@line:19978

        ImPlot::PushColormap(cmap);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPushColormap__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_name) {

//@line:19989

        auto name = obj_name == NULL ? NULL : (char*)env->GetStringUTFChars(obj_name, JNI_FALSE);
        ImPlot::PushColormap(name);
        if (name != NULL) env->ReleaseStringUTFChars(obj_name, name);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPopColormap__(JNIEnv* env, jclass clazz) {


//@line:20009

        ImPlot::PopColormap();
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPopColormap__I(JNIEnv* env, jclass clazz, jint count) {


//@line:20013

        ImPlot::PopColormap(count);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nNextColormapColor(JNIEnv* env, jclass clazz, jobject dst) {


//@line:20067

        Jni::ImVec4Cpy(env, ImPlot::NextColormapColor(), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nNextColormapColorX(JNIEnv* env, jclass clazz) {


//@line:20071

        return ImPlot::NextColormapColor().x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nNextColormapColorY(JNIEnv* env, jclass clazz) {


//@line:20075

        return ImPlot::NextColormapColor().y;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nNextColormapColorZ(JNIEnv* env, jclass clazz) {


//@line:20079

        return ImPlot::NextColormapColor().z;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nNextColormapColorW(JNIEnv* env, jclass clazz) {


//@line:20083

        return ImPlot::NextColormapColor().w;
    

}

JNIEXPORT jint JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetColormapSize__(JNIEnv* env, jclass clazz) {


//@line:20101

        return ImPlot::GetColormapSize();
    

}

JNIEXPORT jint JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetColormapSize__I(JNIEnv* env, jclass clazz, jint cmap) {


//@line:20105

        return ImPlot::GetColormapSize(cmap);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetColormapColor__Limgui_moulberry90_ImVec4_2I(JNIEnv* env, jclass clazz, jobject dst, jint idx) {


//@line:20197

        Jni::ImVec4Cpy(env, ImPlot::GetColormapColor(idx), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetColormapColorX__I(JNIEnv* env, jclass clazz, jint idx) {


//@line:20201

        return ImPlot::GetColormapColor(idx).x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetColormapColorY__I(JNIEnv* env, jclass clazz, jint idx) {


//@line:20205

        return ImPlot::GetColormapColor(idx).y;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetColormapColorZ__I(JNIEnv* env, jclass clazz, jint idx) {


//@line:20209

        return ImPlot::GetColormapColor(idx).z;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetColormapColorW__I(JNIEnv* env, jclass clazz, jint idx) {


//@line:20213

        return ImPlot::GetColormapColor(idx).w;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetColormapColor__Limgui_moulberry90_ImVec4_2II(JNIEnv* env, jclass clazz, jobject dst, jint idx, jint cmap) {


//@line:20217

        Jni::ImVec4Cpy(env, ImPlot::GetColormapColor(idx, cmap), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetColormapColorX__II(JNIEnv* env, jclass clazz, jint idx, jint cmap) {


//@line:20221

        return ImPlot::GetColormapColor(idx, cmap).x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetColormapColorY__II(JNIEnv* env, jclass clazz, jint idx, jint cmap) {


//@line:20225

        return ImPlot::GetColormapColor(idx, cmap).y;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetColormapColorZ__II(JNIEnv* env, jclass clazz, jint idx, jint cmap) {


//@line:20229

        return ImPlot::GetColormapColor(idx, cmap).z;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetColormapColorW__II(JNIEnv* env, jclass clazz, jint idx, jint cmap) {


//@line:20233

        return ImPlot::GetColormapColor(idx, cmap).w;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSampleColormap__Limgui_moulberry90_ImVec4_2F(JNIEnv* env, jclass clazz, jobject dst, jfloat t) {


//@line:20325

        Jni::ImVec4Cpy(env, ImPlot::SampleColormap(t), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSampleColormapX__F(JNIEnv* env, jclass clazz, jfloat t) {


//@line:20329

        return ImPlot::SampleColormap(t).x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSampleColormapY__F(JNIEnv* env, jclass clazz, jfloat t) {


//@line:20333

        return ImPlot::SampleColormap(t).y;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSampleColormapZ__F(JNIEnv* env, jclass clazz, jfloat t) {


//@line:20337

        return ImPlot::SampleColormap(t).z;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSampleColormapW__F(JNIEnv* env, jclass clazz, jfloat t) {


//@line:20341

        return ImPlot::SampleColormap(t).w;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSampleColormap__Limgui_moulberry90_ImVec4_2FI(JNIEnv* env, jclass clazz, jobject dst, jfloat t, jint cmap) {


//@line:20345

        Jni::ImVec4Cpy(env, ImPlot::SampleColormap(t, cmap), dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSampleColormapX__FI(JNIEnv* env, jclass clazz, jfloat t, jint cmap) {


//@line:20349

        return ImPlot::SampleColormap(t, cmap).x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSampleColormapY__FI(JNIEnv* env, jclass clazz, jfloat t, jint cmap) {


//@line:20353

        return ImPlot::SampleColormap(t, cmap).y;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSampleColormapZ__FI(JNIEnv* env, jclass clazz, jfloat t, jint cmap) {


//@line:20357

        return ImPlot::SampleColormap(t, cmap).z;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nSampleColormapW__FI(JNIEnv* env, jclass clazz, jfloat t, jint cmap) {


//@line:20361

        return ImPlot::SampleColormap(t, cmap).w;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nColormapScale__Ljava_lang_String_2DD(JNIEnv* env, jclass clazz, jstring obj_label, jdouble scaleMin, jdouble scaleMax) {

//@line:20456

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImPlot::ColormapScale(label, scaleMin, scaleMax);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nColormapScale__Ljava_lang_String_2DDFF(JNIEnv* env, jclass clazz, jstring obj_label, jdouble scaleMin, jdouble scaleMax, jfloat sizeX, jfloat sizeY) {

//@line:20462

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        ImPlot::ColormapScale(label, scaleMin, scaleMax, size);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nColormapScale__Ljava_lang_String_2DDFFLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jdouble scaleMin, jdouble scaleMax, jfloat sizeX, jfloat sizeY, jstring obj_format) {

//@line:20469

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        ImPlot::ColormapScale(label, scaleMin, scaleMax, size, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nColormapScale__Ljava_lang_String_2DDFFLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jdouble scaleMin, jdouble scaleMax, jfloat sizeX, jfloat sizeY, jstring obj_format, jint flags) {

//@line:20478

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        ImPlot::ColormapScale(label, scaleMin, scaleMax, size, format, flags);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nColormapScale__Ljava_lang_String_2DDFFLjava_lang_String_2II(JNIEnv* env, jclass clazz, jstring obj_label, jdouble scaleMin, jdouble scaleMax, jfloat sizeX, jfloat sizeY, jstring obj_format, jint flags, jint cmap) {

//@line:20487

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        ImPlot::ColormapScale(label, scaleMin, scaleMax, size, format, flags, cmap);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nColormapScale__Ljava_lang_String_2DDLjava_lang_String_2II(JNIEnv* env, jclass clazz, jstring obj_label, jdouble scaleMin, jdouble scaleMax, jstring obj_format, jint flags, jint cmap) {

//@line:20496

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        ImPlot::ColormapScale(label, scaleMin, scaleMax, ImVec2(0,0), format, flags, cmap);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nColormapScale__Ljava_lang_String_2DDII(JNIEnv* env, jclass clazz, jstring obj_label, jdouble scaleMin, jdouble scaleMax, jint flags, jint cmap) {

//@line:20504

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImPlot::ColormapScale(label, scaleMin, scaleMax, ImVec2(0,0), "%g", flags, cmap);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nColormapScale__Ljava_lang_String_2DDFFII(JNIEnv* env, jclass clazz, jstring obj_label, jdouble scaleMin, jdouble scaleMax, jfloat sizeX, jfloat sizeY, jint flags, jint cmap) {

//@line:20510

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        ImPlot::ColormapScale(label, scaleMin, scaleMax, size, "%g", flags, cmap);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nColormapSlider__Ljava_lang_String_2_3F(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_t) {

//@line:20549

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto t = obj_t == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_t, JNI_FALSE);
        auto _result = ImPlot::ColormapSlider(label, (t != NULL ? &t[0] : NULL), NULL);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (t != NULL) env->ReleasePrimitiveArrayCritical(obj_t, t, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nColormapSlider__Ljava_lang_String_2_3FLjava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_t, jstring obj_format) {

//@line:20558

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto t = obj_t == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_t, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImPlot::ColormapSlider(label, (t != NULL ? &t[0] : NULL), NULL, format);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (t != NULL) env->ReleasePrimitiveArrayCritical(obj_t, t, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nColormapSlider__Ljava_lang_String_2_3FLjava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_t, jstring obj_format, jint cmap) {

//@line:20569

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto t = obj_t == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_t, JNI_FALSE);
        auto format = obj_format == NULL ? NULL : (char*)env->GetStringUTFChars(obj_format, JNI_FALSE);
        auto _result = ImPlot::ColormapSlider(label, (t != NULL ? &t[0] : NULL), NULL, format, cmap);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (t != NULL) env->ReleasePrimitiveArrayCritical(obj_t, t, JNI_FALSE);
        if (format != NULL) env->ReleaseStringUTFChars(obj_format, format);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nColormapSlider__Ljava_lang_String_2_3FI(JNIEnv* env, jclass clazz, jstring obj_label, jfloatArray obj_t, jint cmap) {

//@line:20580

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto t = obj_t == NULL ? NULL : (float*)env->GetPrimitiveArrayCritical(obj_t, JNI_FALSE);
        auto _result = ImPlot::ColormapSlider(label, (t != NULL ? &t[0] : NULL), NULL, "", cmap);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        if (t != NULL) env->ReleasePrimitiveArrayCritical(obj_t, t, JNI_FALSE);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nColormapButton__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_label) {

//@line:20631

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImPlot::ColormapButton(label);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nColormapButton__Ljava_lang_String_2FF(JNIEnv* env, jclass clazz, jstring obj_label, jfloat sizeX, jfloat sizeY) {

//@line:20638

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImPlot::ColormapButton(label, size);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nColormapButton__Ljava_lang_String_2FFI(JNIEnv* env, jclass clazz, jstring obj_label, jfloat sizeX, jfloat sizeY, jint cmap) {

//@line:20646

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        ImVec2 size = ImVec2(sizeX, sizeY);
        auto _result = ImPlot::ColormapButton(label, size, cmap);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nColormapButton__Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jint cmap) {

//@line:20654

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImPlot::ColormapButton(label, ImVec2(0,0), cmap);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nBustColorCache__(JNIEnv* env, jclass clazz) {


//@line:20687

        ImPlot::BustColorCache();
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nBustColorCache__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_plotTitleId) {

//@line:20691

        auto plotTitleId = obj_plotTitleId == NULL ? NULL : (char*)env->GetStringUTFChars(obj_plotTitleId, JNI_FALSE);
        ImPlot::BustColorCache(plotTitleId);
        if (plotTitleId != NULL) env->ReleaseStringUTFChars(obj_plotTitleId, plotTitleId);
    
}

JNIEXPORT jlong JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetInputMap(JNIEnv* env, jclass clazz) {


//@line:20711

        return (uintptr_t)&ImPlot::GetInputMap();
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nMapInputDefault__(JNIEnv* env, jclass clazz) {


//@line:20731

        ImPlot::MapInputDefault();
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nMapInputDefault__J(JNIEnv* env, jclass clazz, jlong dst) {


//@line:20735

        ImPlot::MapInputDefault(reinterpret_cast<ImPlotInputMap*>(dst));
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nMapInputReverse__(JNIEnv* env, jclass clazz) {


//@line:20755

        ImPlot::MapInputReverse();
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nMapInputReverse__J(JNIEnv* env, jclass clazz, jlong dst) {


//@line:20759

        ImPlot::MapInputReverse(reinterpret_cast<ImPlotInputMap*>(dst));
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nItemIcon__FFFF(JNIEnv* env, jclass clazz, jfloat colX, jfloat colY, jfloat colZ, jfloat colW) {

//@line:20777

        ImVec4 col = ImVec4(colX, colY, colZ, colW);
        ImPlot::ItemIcon(col);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nItemIcon__I(JNIEnv* env, jclass clazz, jint col) {


//@line:20786

        ImPlot::ItemIcon(static_cast<ImU32>(col));
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nColormapIcon(JNIEnv* env, jclass clazz, jint cmap) {


//@line:20794

        ImPlot::ColormapIcon(cmap);
    

}

JNIEXPORT jlong JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nGetPlotDrawList(JNIEnv* env, jclass clazz) {


//@line:20805

        return (uintptr_t)ImPlot::GetPlotDrawList();
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPushPlotClipRect__(JNIEnv* env, jclass clazz) {


//@line:20823

        ImPlot::PushPlotClipRect();
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPushPlotClipRect__F(JNIEnv* env, jclass clazz, jfloat expand) {


//@line:20827

        ImPlot::PushPlotClipRect(expand);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nPopPlotClipRect(JNIEnv* env, jclass clazz) {


//@line:20838

        ImPlot::PopPlotClipRect();
    

}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nShowStyleSelector(JNIEnv* env, jclass clazz, jstring obj_label) {

//@line:20849

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImPlot::ShowStyleSelector(label);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nShowColormapSelector(JNIEnv* env, jclass clazz, jstring obj_label) {

//@line:20863

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImPlot::ShowColormapSelector(label);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nShowInputMapSelector(JNIEnv* env, jclass clazz, jstring obj_label) {

//@line:20877

        auto label = obj_label == NULL ? NULL : (char*)env->GetStringUTFChars(obj_label, JNI_FALSE);
        auto _result = ImPlot::ShowInputMapSelector(label);
        if (label != NULL) env->ReleaseStringUTFChars(obj_label, label);
        return _result;
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nShowStyleEditor__(JNIEnv* env, jclass clazz) {


//@line:20898

        ImPlot::ShowStyleEditor();
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nShowStyleEditor__J(JNIEnv* env, jclass clazz, jlong ref) {


//@line:20902

        ImPlot::ShowStyleEditor(reinterpret_cast<ImPlotStyle*>(ref));
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nShowUserGuide(JNIEnv* env, jclass clazz) {


//@line:20913

        ImPlot::ShowUserGuide();
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nShowMetricsWindow__(JNIEnv* env, jclass clazz) {


//@line:20931

        ImPlot::ShowMetricsWindow();
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nShowMetricsWindow___3Z(JNIEnv* env, jclass clazz, jbooleanArray obj_pOpen) {

//@line:20935

        auto pOpen = obj_pOpen == NULL ? NULL : (bool*)env->GetPrimitiveArrayCritical(obj_pOpen, JNI_FALSE);
        ImPlot::ShowMetricsWindow((pOpen != NULL ? &pOpen[0] : NULL));
        if (pOpen != NULL) env->ReleasePrimitiveArrayCritical(obj_pOpen, pOpen, JNI_FALSE);
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nShowDemoWindow__(JNIEnv* env, jclass clazz) {


//@line:20959

        ImPlot::ShowDemoWindow();
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlot_nShowDemoWindow___3Z(JNIEnv* env, jclass clazz, jbooleanArray obj_pOpen) {

//@line:20963

        auto pOpen = obj_pOpen == NULL ? NULL : (bool*)env->GetPrimitiveArrayCritical(obj_pOpen, JNI_FALSE);
        ImPlot::ShowDemoWindow((pOpen != NULL ? &pOpen[0] : NULL));
        if (pOpen != NULL) env->ReleasePrimitiveArrayCritical(obj_pOpen, pOpen, JNI_FALSE);
    
}

