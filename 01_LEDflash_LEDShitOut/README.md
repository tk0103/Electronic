# Lチカ
Lチカ

## 部品
* LED
* 抵抗
* LED光拡散キャップ

## Image
|実装|
|---|
|<img src="https://github.com/tk0103/Electronic/blob/master/01_LEDflash_LEDShitOut/45271.gif" alt="test" title="test" width="360" height="270">|

---
# シフトレジスタを用いた制御
* 少数のピンでLEDの点灯を制御するために、シフトレジスタを用いる
* シフトレジスタを用いない場合は、分圧回路を用いてアナログピンから電圧値を取得し、プログラムで分岐

## 部品
* 74HC595()
* LED
* 抵抗

## 参考
https://www.arduino.cc/en/Tutorial/ShiftOut  
http://wp.bumi2.com/using-many-switches-on-arduino/

## Image
|実装|
|---|
|<img src="https://github.com/tk0103/Electronic/blob/master/01_LEDflash_LEDShitOut/45270.gif" alt="test" title="test" width="480" height="270">|
