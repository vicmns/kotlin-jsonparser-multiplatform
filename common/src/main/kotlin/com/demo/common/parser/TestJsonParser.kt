package com.demo.common.parser

import kotlinx.serialization.json.JsonObject
import kotlinx.serialization.json.JsonTreeParser
import kotlinx.serialization.json.content

object TestJsonParser {

    fun parseJSONFromString(response: String?): TestData {
        val testData = TestData()
        response?.let {
            val root: JsonObject = JsonTreeParser(it).read() as? JsonObject
                    ?: return testData // or .readFully() to throw exception if input was not consumed fully
            testData.userId = root["userId"].content
            testData.message = root["message"].content
            testData.userName = root["userName"].content
        }
        return testData
    }
}