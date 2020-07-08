//
//	SOType.swift
//	Model file generated using JSONExport: https://github.com/Ahmed-Ali/JSONExport

import Foundation 
import ObjectMapper


class SOType : NSObject, NSCoding, Mappable{

	var color : [String]?
	var colorType : Int?
	var name : String?
	var sort : Int?
	var typeEn : String?
	var typeId : Int?


	class func newInstance(map: Map) -> Mappable?{
		return SOType()
	}
	required init?(map: Map){}
	private override init(){}

	func mapping(map: Map)
	{
		color <- map["color"]
		colorType <- map["colorType"]
		name <- map["name"]
		sort <- map["sort"]
		typeEn <- map["typeEn"]
		typeId <- map["typeId"]
		
	}

    /**
    * NSCoding required initializer.
    * Fills the data from the passed decoder
    */
    @objc required init(coder aDecoder: NSCoder)
	{
         color = aDecoder.decodeObject(forKey: "color") as? [String]
         colorType = aDecoder.decodeObject(forKey: "colorType") as? Int
         name = aDecoder.decodeObject(forKey: "name") as? String
         sort = aDecoder.decodeObject(forKey: "sort") as? Int
         typeEn = aDecoder.decodeObject(forKey: "typeEn") as? String
         typeId = aDecoder.decodeObject(forKey: "typeId") as? Int

	}

    /**
    * NSCoding required method.
    * Encodes mode properties into the decoder
    */
    @objc func encode(with aCoder: NSCoder)
	{
		if color != nil{
			aCoder.encode(color, forKey: "color")
		}
		if colorType != nil{
			aCoder.encode(colorType, forKey: "colorType")
		}
		if name != nil{
			aCoder.encode(name, forKey: "name")
		}
		if sort != nil{
			aCoder.encode(sort, forKey: "sort")
		}
		if typeEn != nil{
			aCoder.encode(typeEn, forKey: "typeEn")
		}
		if typeId != nil{
			aCoder.encode(typeId, forKey: "typeId")
		}

	}

}