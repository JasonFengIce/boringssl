gradle build
adb install -r ./app/build/outputs/apk/app-debug.apk
adb shell am start -n "cn.ismartv.rsasample/cn.ismartv.rsasample.MainActivity" -a android.intent.action.MAIN -c android.intent.category.LAUNCHER
