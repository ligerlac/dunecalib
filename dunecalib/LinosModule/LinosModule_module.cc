#include <iostream>
#include "art/Framework/Core/ModuleMacros.h"
#include "art/Framework/Core/EDAnalyzer.h"
#include "art/Framework/Principal/Event.h"
#include "ifdh_art/ConditionsDataService/ConditionsData_service.h"
//#include "ifdh_art/IFBeamService/IFBeam_service.h"

class LinosModule : public art::EDAnalyzer{
public:
    explicit LinosModule(fhicl::ParameterSet const & pset) : art::EDAnalyzer(pset) {};
    void analyze(art::Event const& e) {
        std::cout << "e.isRealData() = " << e.isRealData() << std::endl;
        std::cout << "LinosModule.analyze()" << std::endl;
	art::ServiceHandle<ConditionsData> cd;
	cd->sayHello();
    };
};

DEFINE_ART_MODULE(LinosModule)
