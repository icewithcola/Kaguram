#include <android/log.h>

#pragma once

#define TAG "Kaguram"

#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, TAG, ##__VA_ARGS__)
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, TAG, ##__VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, TAG, ##__VA_ARGS__)
#define LOGF(...) __android_log_print(ANDROID_LOG_FATAL, TAG, ##__VA_ARGS__)
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN, TAG, ##__VA_ARGS__)
