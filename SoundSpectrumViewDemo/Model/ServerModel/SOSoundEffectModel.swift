//
//	SOSoundEffectModel.swift
//	Model file generated using JSONExport: https://github.com/Ahmed-Ali/JSONExport

import Foundation 
import ObjectMapper


class SOSoundEffectModel : NSObject, NSCoding, Mappable{

	var effectWrapper : [SOEffectWrapper]?


	class func newInstance(map: Map) -> Mappable?{
		return SOSoundEffectModel()
	}
	required init?(map: Map){}
	private override init(){}

	func mapping(map: Map)
	{
		effectWrapper <- map["effectWrapper"]
		
	}

    /**
    * NSCoding required initializer.
    * Fills the data from the passed decoder
    */
    @objc required init(coder aDecoder: NSCoder)
	{
         effectWrapper = aDecoder.decodeObject(forKey: "effectWrapper") as? [SOEffectWrapper]

	}

    /**
    * NSCoding required method.
    * Encodes mode properties into the decoder
    */
    @objc func encode(with aCoder: NSCoder)
	{
		if effectWrapper != nil{
			aCoder.encode(effectWrapper, forKey: "effectWrapper")
		}

	}

}