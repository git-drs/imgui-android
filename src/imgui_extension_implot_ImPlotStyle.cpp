#include <imgui_extension_implot_ImPlotStyle.h>

//@line:21

        #include "_implot.h"
        #define THIS ((ImPlotStyle*)STRUCT_PTR)
     JNIEXPORT jlong JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nCreate(JNIEnv* env, jobject object) {


//@line:26

        return (uintptr_t)(new ImPlotStyle());
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetLineWeight(JNIEnv* env, jobject object) {


//@line:38

        return THIS->LineWeight;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nSetLineWeight(JNIEnv* env, jobject object, jfloat value) {


//@line:42

        THIS->LineWeight = value;
    

}

JNIEXPORT jint JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetMarker(JNIEnv* env, jobject object) {


//@line:54

        return THIS->Marker;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nSetMarker(JNIEnv* env, jobject object, jint value) {


//@line:58

        THIS->Marker = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetMarkerSize(JNIEnv* env, jobject object) {


//@line:70

        return THIS->MarkerSize;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nSetMarkerSize(JNIEnv* env, jobject object, jfloat value) {


//@line:74

        THIS->MarkerSize = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetMarkerWeight(JNIEnv* env, jobject object) {


//@line:86

        return THIS->MarkerWeight;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nSetMarkerWeight(JNIEnv* env, jobject object, jfloat value) {


//@line:90

        THIS->MarkerWeight = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetFillAlpha(JNIEnv* env, jobject object) {


//@line:102

        return THIS->FillAlpha;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nSetFillAlpha(JNIEnv* env, jobject object, jfloat value) {


//@line:106

        THIS->FillAlpha = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetErrorBarSize(JNIEnv* env, jobject object) {


//@line:118

        return THIS->ErrorBarSize;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nSetErrorBarSize(JNIEnv* env, jobject object, jfloat value) {


//@line:122

        THIS->ErrorBarSize = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetErrorBarWeight(JNIEnv* env, jobject object) {


//@line:134

        return THIS->ErrorBarWeight;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nSetErrorBarWeight(JNIEnv* env, jobject object, jfloat value) {


//@line:138

        THIS->ErrorBarWeight = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetDigitalBitHeight(JNIEnv* env, jobject object) {


//@line:150

        return THIS->DigitalBitHeight;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nSetDigitalBitHeight(JNIEnv* env, jobject object, jfloat value) {


//@line:154

        THIS->DigitalBitHeight = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetDigitalBitGap(JNIEnv* env, jobject object) {


//@line:166

        return THIS->DigitalBitGap;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nSetDigitalBitGap(JNIEnv* env, jobject object, jfloat value) {


//@line:170

        THIS->DigitalBitGap = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetPlotBorderSize(JNIEnv* env, jobject object) {


//@line:182

        return THIS->PlotBorderSize;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nSetPlotBorderSize(JNIEnv* env, jobject object, jfloat value) {


//@line:186

        THIS->PlotBorderSize = value;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetMinorAlpha(JNIEnv* env, jobject object) {


//@line:198

        return THIS->MinorAlpha;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nSetMinorAlpha(JNIEnv* env, jobject object, jfloat value) {


//@line:202

        THIS->MinorAlpha = value;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetMajorTickLen(JNIEnv* env, jobject object, jobject dst) {


//@line:232

        Jni::ImVec2Cpy(env, THIS->MajorTickLen, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetMajorTickLenX(JNIEnv* env, jobject object) {


//@line:236

        return THIS->MajorTickLen.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetMajorTickLenY(JNIEnv* env, jobject object) {


//@line:240

        return THIS->MajorTickLen.y;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nSetMajorTickLen(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:244

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->MajorTickLen = value;
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetMinorTickLen(JNIEnv* env, jobject object, jobject dst) {


//@line:275

        Jni::ImVec2Cpy(env, THIS->MinorTickLen, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetMinorTickLenX(JNIEnv* env, jobject object) {


//@line:279

        return THIS->MinorTickLen.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetMinorTickLenY(JNIEnv* env, jobject object) {


//@line:283

        return THIS->MinorTickLen.y;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nSetMinorTickLen(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:287

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->MinorTickLen = value;
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetMajorTickSize(JNIEnv* env, jobject object, jobject dst) {


//@line:318

        Jni::ImVec2Cpy(env, THIS->MajorTickSize, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetMajorTickSizeX(JNIEnv* env, jobject object) {


//@line:322

        return THIS->MajorTickSize.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetMajorTickSizeY(JNIEnv* env, jobject object) {


//@line:326

        return THIS->MajorTickSize.y;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nSetMajorTickSize(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:330

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->MajorTickSize = value;
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetMinorTickSize(JNIEnv* env, jobject object, jobject dst) {


//@line:361

        Jni::ImVec2Cpy(env, THIS->MinorTickSize, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetMinorTickSizeX(JNIEnv* env, jobject object) {


//@line:365

        return THIS->MinorTickSize.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetMinorTickSizeY(JNIEnv* env, jobject object) {


//@line:369

        return THIS->MinorTickSize.y;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nSetMinorTickSize(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:373

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->MinorTickSize = value;
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetMajorGridSize(JNIEnv* env, jobject object, jobject dst) {


//@line:404

        Jni::ImVec2Cpy(env, THIS->MajorGridSize, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetMajorGridSizeX(JNIEnv* env, jobject object) {


//@line:408

        return THIS->MajorGridSize.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetMajorGridSizeY(JNIEnv* env, jobject object) {


//@line:412

        return THIS->MajorGridSize.y;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nSetMajorGridSize(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:416

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->MajorGridSize = value;
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetMinorGridSize(JNIEnv* env, jobject object, jobject dst) {


//@line:447

        Jni::ImVec2Cpy(env, THIS->MinorGridSize, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetMinorGridSizeX(JNIEnv* env, jobject object) {


//@line:451

        return THIS->MinorGridSize.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetMinorGridSizeY(JNIEnv* env, jobject object) {


//@line:455

        return THIS->MinorGridSize.y;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nSetMinorGridSize(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:459

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->MinorGridSize = value;
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetPlotPadding(JNIEnv* env, jobject object, jobject dst) {


//@line:490

        Jni::ImVec2Cpy(env, THIS->PlotPadding, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetPlotPaddingX(JNIEnv* env, jobject object) {


//@line:494

        return THIS->PlotPadding.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetPlotPaddingY(JNIEnv* env, jobject object) {


//@line:498

        return THIS->PlotPadding.y;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nSetPlotPadding(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:502

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->PlotPadding = value;
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetLabelPadding(JNIEnv* env, jobject object, jobject dst) {


//@line:533

        Jni::ImVec2Cpy(env, THIS->LabelPadding, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetLabelPaddingX(JNIEnv* env, jobject object) {


//@line:537

        return THIS->LabelPadding.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetLabelPaddingY(JNIEnv* env, jobject object) {


//@line:541

        return THIS->LabelPadding.y;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nSetLabelPadding(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:545

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->LabelPadding = value;
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetLegendPadding(JNIEnv* env, jobject object, jobject dst) {


//@line:576

        Jni::ImVec2Cpy(env, THIS->LegendPadding, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetLegendPaddingX(JNIEnv* env, jobject object) {


//@line:580

        return THIS->LegendPadding.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetLegendPaddingY(JNIEnv* env, jobject object) {


//@line:584

        return THIS->LegendPadding.y;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nSetLegendPadding(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:588

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->LegendPadding = value;
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetLegendInnerPadding(JNIEnv* env, jobject object, jobject dst) {


//@line:619

        Jni::ImVec2Cpy(env, THIS->LegendInnerPadding, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetLegendInnerPaddingX(JNIEnv* env, jobject object) {


//@line:623

        return THIS->LegendInnerPadding.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetLegendInnerPaddingY(JNIEnv* env, jobject object) {


//@line:627

        return THIS->LegendInnerPadding.y;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nSetLegendInnerPadding(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:631

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->LegendInnerPadding = value;
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetLegendSpacing(JNIEnv* env, jobject object, jobject dst) {


//@line:662

        Jni::ImVec2Cpy(env, THIS->LegendSpacing, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetLegendSpacingX(JNIEnv* env, jobject object) {


//@line:666

        return THIS->LegendSpacing.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetLegendSpacingY(JNIEnv* env, jobject object) {


//@line:670

        return THIS->LegendSpacing.y;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nSetLegendSpacing(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:674

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->LegendSpacing = value;
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetMousePosPadding(JNIEnv* env, jobject object, jobject dst) {


//@line:705

        Jni::ImVec2Cpy(env, THIS->MousePosPadding, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetMousePosPaddingX(JNIEnv* env, jobject object) {


//@line:709

        return THIS->MousePosPadding.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetMousePosPaddingY(JNIEnv* env, jobject object) {


//@line:713

        return THIS->MousePosPadding.y;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nSetMousePosPadding(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:717

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->MousePosPadding = value;
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetAnnotationPadding(JNIEnv* env, jobject object, jobject dst) {


//@line:748

        Jni::ImVec2Cpy(env, THIS->AnnotationPadding, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetAnnotationPaddingX(JNIEnv* env, jobject object) {


//@line:752

        return THIS->AnnotationPadding.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetAnnotationPaddingY(JNIEnv* env, jobject object) {


//@line:756

        return THIS->AnnotationPadding.y;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nSetAnnotationPadding(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:760

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->AnnotationPadding = value;
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetFitPadding(JNIEnv* env, jobject object, jobject dst) {


//@line:791

        Jni::ImVec2Cpy(env, THIS->FitPadding, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetFitPaddingX(JNIEnv* env, jobject object) {


//@line:795

        return THIS->FitPadding.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetFitPaddingY(JNIEnv* env, jobject object) {


//@line:799

        return THIS->FitPadding.y;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nSetFitPadding(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:803

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->FitPadding = value;
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetPlotDefaultSize(JNIEnv* env, jobject object, jobject dst) {


//@line:834

        Jni::ImVec2Cpy(env, THIS->PlotDefaultSize, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetPlotDefaultSizeX(JNIEnv* env, jobject object) {


//@line:838

        return THIS->PlotDefaultSize.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetPlotDefaultSizeY(JNIEnv* env, jobject object) {


//@line:842

        return THIS->PlotDefaultSize.y;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nSetPlotDefaultSize(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:846

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->PlotDefaultSize = value;
    
}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetPlotMinSize(JNIEnv* env, jobject object, jobject dst) {


//@line:877

        Jni::ImVec2Cpy(env, THIS->PlotMinSize, dst);
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetPlotMinSizeX(JNIEnv* env, jobject object) {


//@line:881

        return THIS->PlotMinSize.x;
    

}

JNIEXPORT jfloat JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetPlotMinSizeY(JNIEnv* env, jobject object) {


//@line:885

        return THIS->PlotMinSize.y;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nSetPlotMinSize(JNIEnv* env, jobject object, jfloat valueX, jfloat valueY) {

//@line:889

        ImVec2 value = ImVec2(valueX, valueY);
        THIS->PlotMinSize = value;
    
}

JNIEXPORT jobjectArray JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetColors(JNIEnv* env, jobject object) {


//@line:902

        return Jni::NewImVec4Array(env, THIS->Colors, ImPlotCol_COUNT);
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nSetColors(JNIEnv* env, jobject object, jobjectArray value) {


//@line:906

        Jni::ImVec4ArrayCpy(env, value, THIS->Colors, ImPlotCol_COUNT);
    

}

JNIEXPORT jint JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetColormap(JNIEnv* env, jobject object) {


//@line:918

        return THIS->Colormap;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nSetColormap(JNIEnv* env, jobject object, jint value) {


//@line:922

        THIS->Colormap = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetUseLocalTime(JNIEnv* env, jobject object) {


//@line:934

        return THIS->UseLocalTime;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nSetUseLocalTime(JNIEnv* env, jobject object, jboolean value) {


//@line:938

        THIS->UseLocalTime = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetUseISO8601(JNIEnv* env, jobject object) {


//@line:950

        return THIS->UseISO8601;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nSetUseISO8601(JNIEnv* env, jobject object, jboolean value) {


//@line:954

        THIS->UseISO8601 = value;
    

}

JNIEXPORT jboolean JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nGetUse24HourClock(JNIEnv* env, jobject object) {


//@line:966

        return THIS->Use24HourClock;
    

}

JNIEXPORT void JNICALL Java_imgui_moulberry90_extension_implot_ImPlotStyle_nSetUse24HourClock(JNIEnv* env, jobject object, jboolean value) {


//@line:970

        THIS->Use24HourClock = value;
    

}


//@line:974

        #undef THIS
     