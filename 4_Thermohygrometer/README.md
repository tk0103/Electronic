## Arduino
* 温度・湿度・気圧（BME280）+LCD表示
* 温度30度以上または湿度70％以上の場合は赤色点滅
* 温度26度以上または湿度40％以上の場合は緑色点滅
* それ以外の場合は青色点滅
* LEDの明るさはPWMを利用してゆるやかに消灯

## 部品
* LCDモジュール(P-10185)
* 半固定ボリューム 10kΩ
* LED拡散キャップ5mm(I-01120)  
* RGBフルカラーLED 5mm OSRA5131A(I-02476)  
* 温湿度・気圧センサモジュールキット(K-09421)

## 回路図

## 簡単なレベル変換
http://botalab.m37.coreserver.jp/botalab.info/2016/09/10/5v-3-3v-%E3%83%AC%E3%83%99%E3%83%AB%E5%A4%89%E6%8F%9B%E3%81%AE%E5%8E%9F%E7%90%86/

## フルカラーLED
* 接続タイプ：カソードコモン
* 標準電流：20mA
* ＶＦ：赤2.0Ｖ／緑3.6Ｖ／青3.6Ｖ

## Image
|実装|
|---|
|<img src="https://github.com/tk0103/Arduino/blob/master/4_Thermohygrometer/45136.jpg" alt="test" title="test" width="473" height="336">|
