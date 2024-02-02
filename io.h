#ifndef IO_H
#define IO_H

#include "config.h" // 設定定数を含むヘッダーファイルをインクルード

// I/O操作のための関数プロトタイプを宣言

/**
 * @brief I/Oピンを設定します。
 * 
 * この関数は、LEDピンやボタンピンなどのI/Oピンを設定します。
 * システムの初期化時に呼び出されるべきです。
 */
void IO_Init(void);

/**
 * @brief LEDをオンまたはオフにします。
 * 
 * @param state LEDの望ましい状態: 1 でオン、0 でオフ。
 */
void LED_Set(int state);

/**
 * @brief ボタンの状態を読み取ります。
 * 
 * @return int ボタンの現在の状態: 押されている場合は1、そうでない場合は0。
 */
int Button_Read(void);

#endif // IO_H
