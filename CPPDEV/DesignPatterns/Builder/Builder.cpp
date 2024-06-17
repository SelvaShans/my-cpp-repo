#include <iostream>
using namespace std;

class ComputerParts {
    private:
        string m_monitorType;
        string m_processor;
    public:
        void setMonitorType (string monitorType) {
            m_monitorType = monitorType;
        }
        void setProcessor (string processor) {
            m_processor = processor;
        }
        
        void display() {
            cout <<"====================================\n";
            cout << "Monitor Type = " << m_monitorType << "\n";
            cout << "Processor = " << m_processor << "\n";
            cout <<"====================================\n";
        }
};
class Electronic {  
    protected:
        ComputerParts *comp_ = nullptr;
    public:
        Electronic() {
            comp_ = new ComputerParts;
        }
        virtual ~Electronic() {
            if (comp_) {
                delete comp_;
                comp_ = nullptr;
            }
            else
                comp_ = nullptr;
        }
        virtual void buildMonitorType (string) = 0;
        virtual void buildProcessor (string) = 0;
       
        ComputerParts *getComputerPartsInstance () {
            return comp_;
        }
};
class Computer : public Electronic {
    public:
        void buildMonitorType (string monitorType) {
            comp_->setMonitorType(monitorType);
        }
        void buildProcessor (string processor) {
            comp_->setProcessor(processor);
        }
};
class BuildComputer {
    public:
        BuildComputer (Electronic *elec) {
            elec_ = elec;
        }
        ComputerParts *buildComputer() {
            elec_->buildMonitorType("14 Inch LED Type Monitor");
            elec_->buildProcessor("Intel Core 5th Generation");

            return elec_->getComputerPartsInstance();
        }
    private:
        Electronic *elec_;
};

int main() {
    Electronic *e1 = new Computer;
    BuildComputer *b1 = new BuildComputer(e1);

    ComputerParts *c1 = b1->buildComputer();
    c1->display();

    delete b1;
    delete e1;
    return 0;
}