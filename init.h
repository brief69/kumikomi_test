#ifndef INIT_H
#define INIT_H

// システム初期化関数のプロトタイプ宣言

/**
 * @brief システムクロックおよびその他のコアサブシステムを初期化します。
 * 
 * この関数は、アプリケーションが実行されるために必要なシステムクロックおよびその他の基本的な
 * ハードウェア機能のセットアップを行います。メインプログラムの開始時に呼び出されるべきです。
 */
void System_Init(void);

#endif // INIT_H
