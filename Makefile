# コンパイラを定義
CC = gcc

# コンパイル時のフラグを定義
CFLAGS = -Wall -g -std=c99 -Os

# /usr/include以外のヘッダーファイルがあるディレクトリを定義
INCLUDES = -I.

# /usr/lib以外のライブラリパスを定義
LFLAGS =

# 実行可能ファイルにリンクするライブラリを定義
LIBS =

# Cソースファイルを定義
SRCS = main.c init.c io.c app_logic.c

# Cヘッダーファイルを定義
HDRS = config.h init.h io.h app_logic.h

# Cオブジェクトファイルを定義
OBJS = $(SRCS:.c=.o)

# 実行可能ファイルを定義
MAIN = embedded_app

.PHONY: depend clean

# メインターゲットを定義し、コンパイルメッセージを表示
all:    $(MAIN)
	@echo  Simple embedded application has been compiled

# 実行可能ファイルを生成するためのルールを定義
$(MAIN): $(OBJS) 
	$(CC) $(CFLAGS) $(INCLUDES) -o $(MAIN) $(OBJS) $(LFLAGS) $(LIBS)

# .cファイルから.oファイルを生成するためのサフィックスルールを定義
# 自動変数 $< はルールの前提条件（.cファイル）、$@ はルールのターゲット（.oファイル）を表す
.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $<  -o $@

# クリーンアップターゲットを定義し、オブジェクトファイルと実行可能ファイルを削除
clean:
	$(RM) *.o *~ $(MAIN)

# 依存関係を自動生成するためのターゲットを定義
depend: $(SRCS)
	makedepend $(INCLUDES) $^

# DO NOT DELETE THIS LINE -- make depend needs it
