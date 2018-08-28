package com.demo.jsonparserdemo

import android.support.v7.app.AppCompatActivity
import android.os.Bundle
import com.demo.common.parser.TestData
import com.demo.common.parser.TestJsonParser
import kotlinx.android.synthetic.main.activity_main.userWelcomeText

class MainActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        val testData: TestData = TestJsonParser.parseJSONFromString(
                "{\"userName\":\"John Doe\",\"message\":\"Hello from JSON!\",\"userId\":\"1231412\"}")
        userWelcomeText.text = getString(R.string.welcome_user, testData.userName)
    }
}
