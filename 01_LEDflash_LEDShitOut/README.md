# 概要（Lチカ）
Lチカするだけ

## 部品
* LED
* 抵抗
* LED光拡散キャップ

## カラーコード
|数字|色|数字|色|
|:---:|:---:|:---:|:---:|
|0|黒|5|緑|
|1|茶|6|青|
|2|赤|7|紫|
|3|橙|8|灰|
|4|黄|9|白|

## Image
|実装|
|---|
|<img src="https://github.com/tk0103/Electronic/blob/master/01_LEDflash_LEDShitOut/45271.gif" alt="test" title="test" width="360" height="270">|

---
# 概要（シフトレジスタ制御）
* シフトレジスタを用いたLEDの点灯制御
* 少数のピンでLEDの点灯を制御するために、シフトレジスタを用いる
* シフトレジスタを用いない場合は、分圧回路を用いてアナログピンから電圧値を取得し、プログラムで分岐

## 部品
* 74HC595(I-08605)
* LED
* 抵抗

## 参考
https://www.arduino.cc/en/Tutorial/ShiftOut  
http://wp.bumi2.com/using-many-switches-on-arduino/

## Image
|実装|
|---|
|<img src="https://github.com/tk0103/Electronic/blob/master/01_LEDflash_LEDShitOut/45270.gif" alt="test" title="test" width="480" height="270">|
