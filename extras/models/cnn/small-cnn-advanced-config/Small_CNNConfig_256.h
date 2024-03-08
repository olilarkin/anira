#ifndef ANIRA_SMALL_CNNCONFIG_256_H
#define ANIRA_SMALL_CNNCONFIG_256_H

#include <anira/anira.h>

static anira::InferenceConfig small_cnnConfig_256(
#ifdef USE_LIBTORCH
        STEERABLENAFX_MODELS_PATH_PYTORCH + std::string("model_0/steerable-nafx-3_blocks-dynamic.pt"),
        {1, 1, 1588},
        {1, 1, 256},
#endif
#ifdef USE_ONNXRUNTIME
        STEERABLENAFX_MODELS_PATH_PYTORCH + std::string("model_0/steerable-nafx-3_blocks-libtorch-dynamic.onnx"),
        {1, 1, 1588},
        {1, 1, 256},
#endif
#ifdef USE_TFLITE
        STEERABLENAFX_MODELS_PATH_TENSORFLOW + std::string("model_0/steerable-nafx-3_blocks-dynamic.tflite"),
        {1, 1588, 1},
        {1, 256, 1},
#endif
        1,
        256,
        1588,
        256,
        256,
        0,
        false,
        0.5f,
        false
);


#endif //ANIRA_SMALL_CNNCONFIG_256_H
