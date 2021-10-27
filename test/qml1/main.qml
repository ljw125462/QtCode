import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    width: 400  //宽度
    height: 400  //高度
    visible: true  //是否可见
    title: qsTr("Hello World") //窗口标题
    color: "#ffffff" //窗口背景色
    flags:  Qt.Window //窗口标志\类型 说明是什么窗口
    opacity: 1 //透明度 数值区间为0~1 支持小数

    Rectangle {
        width: 400
        height: 400

        Canvas {
            anchors.fill: parent
            onPaint: {
                var ctx = getContext("2d");
                ctx.reset();

                var centreX = width / 2;
                var centreY = height / 2;

                ctx.beginPath();
                ctx.fillStyle = "black";
                ctx.moveTo(centreX, centreY);
                ctx.arc(centreX, centreY, width / 4, 0, Math.PI * 0.5, false);
                ctx.lineTo(centreX, centreY);
                ctx.fill();

                ctx.beginPath();
                ctx.fillStyle = "red";
                ctx.moveTo(centreX, centreY);
                ctx.arc(centreX, centreY, width / 4, Math.PI * 0.5, Math.PI * 2, false);
                ctx.lineTo(centreX, centreY);
                ctx.fill();
            }
        }
    }
}
