//
//  ViewController.swift
//  jsonparserdemo
//
//  Created by Victor Manuel Cervantes on 8/28/18.
//  Copyright © 2018 Demo. All rights reserved.
//

import UIKit
import KotlinChartDataParser

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        let parser = TestJsonParser()
        let testData: TestData = parser.parseJSONFromString(response: "{\"userName\": \"John Dow\", \"message\": \"Hello from JSON!\", \"userId\": \"1231412\"}")
        //See the response on the console!
        print(testData)
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

