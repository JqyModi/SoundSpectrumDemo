//
//	SOEffectWrapper.swift
//	Model file generated using JSONExport: https://github.com/Ahmed-Ali/JSONExport

import Foundation 
import ObjectMapper


class SOEffectWrapper : NSObject, NSCoding, Mappable{

	var categoryEn : String?
	var categoryId : Int?
	var categoryName : String?
	var resource : String?
	var sort : Int?
	var type : [SOType]?


	class func newInstance(map: Map) -> Mappable?{
		return SOEffectWrapper()
	}
	required init?(map: Map){}
	private override init(){}

	func mapping(map: Map)
	{
		categoryEn <- map["categoryEn"]
		categoryId <- map["categoryId"]
		categoryName <- map["categoryName"]
		resource <- map["resource"]
		sort <- map["sort"]
		type <- map["type"]
		
	}

    /**
    * NSCoding required initializer.
    * Fills the data from the passed decoder
    */
    @objc required init(coder aDecoder: NSCoder)
	{
         categoryEn = aDecoder.decodeObject(forKey: "categoryEn") as? String
         categoryId = aDecoder.decodeObject(forKey: "categoryId") as? Int
         categoryName = aDecoder.decodeObject(forKey: "categoryName") as? String
         resource = aDecoder.decodeObject(forKey: "resource") as? String
         sort = aDecoder.decodeObject(forKey: "sort") as? Int
         type = aDecoder.decodeObject(forKey: "type") as? [SOType]

	}

    /**
    * NSCoding required method.
    * Encodes mode properties into the decoder
    */
    @objc func encode(with aCoder: NSCoder)
	{
		if categoryEn != nil{
			aCoder.encode(categoryEn, forKey: "categoryEn")
		}
		if categoryId != nil{
			aCoder.encode(categoryId, forKey: "categoryId")
		}
		if categoryName != nil{
			aCoder.encode(categoryName, forKey: "categoryName")
		}
		if resource != nil{
			aCoder.encode(resource, forKey: "resource")
		}
		if sort != nil{
			aCoder.encode(sort, forKey: "sort")
		}
		if type != nil{
			aCoder.encode(type, forKey: "type")
		}

	}

}