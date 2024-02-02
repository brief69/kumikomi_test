#ifndef CONFIG_H
#define CONFIG_H

// システムクロックの周波数を定義します（16MHz）
#define SYSTEM_CLOCK_HZ 16000000U // 16 MHz

// UART通信のボーレートを定義します
#define UART_BAUD_RATE 9600

// I/Oピンの設定を定義します
#define LED_PIN 13 // LEDを接続するピン番号
#define BUTTON_PIN 2 // ボタンを接続するピン番号

// アプリケーション固有の設定を定義します
// 必要に応じて、アプリケーションのロジックに合わせた設定を追加してください

#endif // CONFIG_H
