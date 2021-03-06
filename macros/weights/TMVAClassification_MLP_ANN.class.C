// Class: ReadMLP_ANN
// Automatically generated by MethodBase::MakeClass
//

/* configuration options =====================================================

#GEN -*-*-*-*-*-*-*-*-*-*-*- general info -*-*-*-*-*-*-*-*-*-*-*-

Method         : MLP::MLP_ANN
TMVA Release   : 4.2.1         [262657]
ROOT Release   : 6.06/01       [394753]
Creator        : brucms16
Date           : Tue Sep  6 12:38:40 2016
Host           : Linux vocms0315.cern.ch 2.6.32-573.26.1.el6.x86_64 #1 SMP Wed May 4 09:23:05 CEST 2016 x86_64 x86_64 x86_64 GNU/Linux
Dir            : /home/t3cms/brucms16/CMSSW_8_0_14/src/UserCode/SkeletonAnalysis/macros
Training events: 15056
Analysis type  : [Classification]


#OPT -*-*-*-*-*-*-*-*-*-*-*-*- options -*-*-*-*-*-*-*-*-*-*-*-*-

# Set by User:
NCycles: "1000" [Number of training cycles]
HiddenLayers: "N,N+5" [Specification of hidden layer architecture]
V: "False" [Verbose output (short form of "VerbosityLevel" below - overrides the latter one)]
VarTransform: "Norm" [List of variable transformations performed before training, e.g., "D_Background,P_Signal,G,N_AllClasses" for: "Decorrelation, PCA-transformation, Gaussianisation, Normalisation, each for the given class of events ('AllClasses' denotes all events of all classes, if no class indication is given, 'All' is assumed)"]
H: "False" [Print method-specific help message]
LearningRate: "9.000000e-02" [ANN learning rate parameter]
DecayRate: "1.000000e-02" [Decay rate for learning parameter]
# Default:
NeuronType: "sigmoid" [Neuron activation function type]
RandomSeed: "1" [Random seed for initial synapse weights (0 means unique seed for each run; default value '1')]
EstimatorType: "CE" [MSE (Mean Square Estimator) for Gaussian Likelihood or CE(Cross-Entropy) for Bernoulli Likelihood]
NeuronInputType: "sum" [Neuron input function type]
VerbosityLevel: "Default" [Verbosity level]
CreateMVAPdfs: "False" [Create PDFs for classifier outputs (signal and background)]
IgnoreNegWeightsInTraining: "False" [Events with negative weights are ignored in the training (but are included for testing and performance evaluation)]
TrainingMethod: "BP" [Train with Back-Propagation (BP), BFGS Algorithm (BFGS), or Genetic Algorithm (GA - slower and worse)]
TestRate: "10" [Test for overtraining performed at each #th epochs]
EpochMonitoring: "False" [Provide epoch-wise monitoring plots according to TestRate (caution: causes big ROOT output file!)]
Sampling: "1.000000e+00" [Only 'Sampling' (randomly selected) events are trained each epoch]
SamplingEpoch: "1.000000e+00" [Sampling is used for the first 'SamplingEpoch' epochs, afterwards, all events are taken for training]
SamplingImportance: "1.000000e+00" [ The sampling weights of events in epochs which successful (worse estimator than before) are multiplied with SamplingImportance, else they are divided.]
SamplingTraining: "True" [The training sample is sampled]
SamplingTesting: "False" [The testing sample is sampled]
ResetStep: "50" [How often BFGS should reset history]
Tau: "3.000000e+00" [LineSearch "size step"]
BPMode: "sequential" [Back-propagation learning mode: sequential or batch]
BatchSize: "-1" [Batch size: number of events/batch, only set if in Batch Mode, -1 for BatchSize=number_of_events]
ConvergenceImprove: "1.000000e-30" [Minimum improvement which counts as improvement (<0 means automatic convergence check is turned off)]
ConvergenceTests: "-1" [Number of steps (without improvement) required for convergence (<0 means automatic convergence check is turned off)]
UseRegulator: "False" [Use regulator to avoid over-training]
UpdateLimit: "10000" [Maximum times of regulator update]
CalculateErrors: "False" [Calculates inverse Hessian matrix at the end of the training to be able to calculate the uncertainties of an MVA value]
WeightRange: "1.000000e+00" [Take the events for the estimator calculations from small deviations from the desired value to large deviations only over the weight range]
##


#VAR -*-*-*-*-*-*-*-*-*-*-*-* variables *-*-*-*-*-*-*-*-*-*-*-*-

NVar 11
Jet1Pt                        Jet1Pt                        Jet1Pt                        Jet1Pt                                                          'F'    [110.048698425,1572.76037598]
LepPt                         LepPt                         LepPt                         LepPt                                                           'F'    [5.00075817108,29.9984378815]
LepChg                        LepChg                        LepChg                        LepChg                                                          'F'    [-1,1]
LepEta                        LepEta                        LepEta                        LepEta                                                          'F'    [-2.48411560059,2.49880051613]
Met                           Met                           Met                           Met                                                             'F'    [280.020294189,1289.47937012]
mt                            mt                            mt                            mt                                                              'F'    [0.000537815736607,300.527191162]
HT20                          HT20                          HT20                          HT20                                                            'F'    [112.003395081,4504.87304688]
NbLoose30                     NbLoose30                     NbLoose30                     NbLoose30                                                       'F'    [0,6]
Njet                          Njet                          Njet                          Njet                                                            'F'    [1,14]
JetHBpt                       JetHBpt                       JetHBpt                       JetHBpt                                                         'F'    [-999,1378.42883301]
DrJetHBLep                    DrJetHBLep                    DrJetHBLep                    DrJetHBLep                                                      'F'    [-999,5.38026332855]
NSpec 0


============================================================================ */

#include <vector>
#include <cmath>
#include <string>
#include <iostream>

#ifndef IClassifierReader__def
#define IClassifierReader__def

class IClassifierReader {

 public:

   // constructor
   IClassifierReader() : fStatusIsClean( true ) {}
   virtual ~IClassifierReader() {}

   // return classifier response
   virtual double GetMvaValue( const std::vector<double>& inputValues ) const = 0;

   // returns classifier status
   bool IsStatusClean() const { return fStatusIsClean; }

 protected:

   bool fStatusIsClean;
};

#endif

class ReadMLP_ANN : public IClassifierReader {

 public:

   // constructor
   ReadMLP_ANN( std::vector<std::string>& theInputVars ) 
      : IClassifierReader(),
        fClassName( "ReadMLP_ANN" ),
        fNvars( 11 ),
        fIsNormalised( false )
   {      
      // the training input variables
      const char* inputVars[] = { "Jet1Pt", "LepPt", "LepChg", "LepEta", "Met", "mt", "HT20", "NbLoose30", "Njet", "JetHBpt", "DrJetHBLep" };

      // sanity checks
      if (theInputVars.size() <= 0) {
         std::cout << "Problem in class \"" << fClassName << "\": empty input vector" << std::endl;
         fStatusIsClean = false;
      }

      if (theInputVars.size() != fNvars) {
         std::cout << "Problem in class \"" << fClassName << "\": mismatch in number of input values: "
                   << theInputVars.size() << " != " << fNvars << std::endl;
         fStatusIsClean = false;
      }

      // validate input variables
      for (size_t ivar = 0; ivar < theInputVars.size(); ivar++) {
         if (theInputVars[ivar] != inputVars[ivar]) {
            std::cout << "Problem in class \"" << fClassName << "\": mismatch in input variable names" << std::endl
                      << " for variable [" << ivar << "]: " << theInputVars[ivar].c_str() << " != " << inputVars[ivar] << std::endl;
            fStatusIsClean = false;
         }
      }

      // initialize min and max vectors (for normalisation)
      fVmin[0] = -1;
      fVmax[0] = 1;
      fVmin[1] = -1;
      fVmax[1] = 0.99999988079071;
      fVmin[2] = -1;
      fVmax[2] = 1;
      fVmin[3] = -1;
      fVmax[3] = 1;
      fVmin[4] = -1;
      fVmax[4] = 1;
      fVmin[5] = -1;
      fVmax[5] = 1;
      fVmin[6] = -1;
      fVmax[6] = 1;
      fVmin[7] = -1;
      fVmax[7] = 1;
      fVmin[8] = -1;
      fVmax[8] = 1;
      fVmin[9] = -1;
      fVmax[9] = 1;
      fVmin[10] = -1;
      fVmax[10] = 1;

      // initialize input variable types
      fType[0] = 'F';
      fType[1] = 'F';
      fType[2] = 'F';
      fType[3] = 'F';
      fType[4] = 'F';
      fType[5] = 'F';
      fType[6] = 'F';
      fType[7] = 'F';
      fType[8] = 'F';
      fType[9] = 'F';
      fType[10] = 'F';

      // initialize constants
      Initialize();

      // initialize transformation
      InitTransform();
   }

   // destructor
   virtual ~ReadMLP_ANN() {
      Clear(); // method-specific
   }

   // the classifier response
   // "inputValues" is a vector of input values in the same order as the 
   // variables given to the constructor
   double GetMvaValue( const std::vector<double>& inputValues ) const;

 private:

   // method-specific destructor
   void Clear();

   // input variable transformation

   double fMin_1[3][11];
   double fMax_1[3][11];
   void InitTransform_1();
   void Transform_1( std::vector<double> & iv, int sigOrBgd ) const;
   void InitTransform();
   void Transform( std::vector<double> & iv, int sigOrBgd ) const;

   // common member variables
   const char* fClassName;

   const size_t fNvars;
   size_t GetNvar()           const { return fNvars; }
   char   GetType( int ivar ) const { return fType[ivar]; }

   // normalisation of input variables
   const bool fIsNormalised;
   bool IsNormalised() const { return fIsNormalised; }
   double fVmin[11];
   double fVmax[11];
   double NormVariable( double x, double xmin, double xmax ) const {
      // normalise to output range: [-1, 1]
      return 2*(x - xmin)/(xmax - xmin) - 1.0;
   }

   // type of input variable: 'F' or 'I'
   char   fType[11];

   // initialize internal variables
   void Initialize();
   double GetMvaValue__( const std::vector<double>& inputValues ) const;

   // private members (method specific)

   double ActivationFnc(double x) const;
   double OutputActivationFnc(double x) const;

   int fLayers;
   int fLayerSize[4];
   double fWeightMatrix0to1[12][12];   // weight matrix from layer 0 to 1
   double fWeightMatrix1to2[17][12];   // weight matrix from layer 1 to 2
   double fWeightMatrix2to3[1][17];   // weight matrix from layer 2 to 3

   double * fWeights[4];
};

inline void ReadMLP_ANN::Initialize()
{
   // build network structure
   fLayers = 4;
   fLayerSize[0] = 12; fWeights[0] = new double[12]; 
   fLayerSize[1] = 12; fWeights[1] = new double[12]; 
   fLayerSize[2] = 17; fWeights[2] = new double[17]; 
   fLayerSize[3] = 1; fWeights[3] = new double[1]; 
   // weight matrix from layer 0 to 1
   fWeightMatrix0to1[0][0] = 1.4558718389419;
   fWeightMatrix0to1[1][0] = -1.12517777749619;
   fWeightMatrix0to1[2][0] = 3.70047046523177;
   fWeightMatrix0to1[3][0] = 0.610762138881303;
   fWeightMatrix0to1[4][0] = -1.26892375504462;
   fWeightMatrix0to1[5][0] = -3.65098714975025;
   fWeightMatrix0to1[6][0] = 0.947783046946266;
   fWeightMatrix0to1[7][0] = 1.4487906662308;
   fWeightMatrix0to1[8][0] = -2.17343659092599;
   fWeightMatrix0to1[9][0] = -2.98016745546114;
   fWeightMatrix0to1[10][0] = -5.58982653473798;
   fWeightMatrix0to1[0][1] = 1.61269062440942;
   fWeightMatrix0to1[1][1] = -2.31900314208338;
   fWeightMatrix0to1[2][1] = -0.868721666804428;
   fWeightMatrix0to1[3][1] = 2.83917189428939;
   fWeightMatrix0to1[4][1] = -0.285518548361438;
   fWeightMatrix0to1[5][1] = -2.91610495889422;
   fWeightMatrix0to1[6][1] = 5.68976036844563;
   fWeightMatrix0to1[7][1] = 0.316944884010679;
   fWeightMatrix0to1[8][1] = 3.69936864664561;
   fWeightMatrix0to1[9][1] = -0.231593108427362;
   fWeightMatrix0to1[10][1] = 0.276030436557634;
   fWeightMatrix0to1[0][2] = 0.239702859907989;
   fWeightMatrix0to1[1][2] = 0.761223790473115;
   fWeightMatrix0to1[2][2] = -0.272907871557842;
   fWeightMatrix0to1[3][2] = 0.173926679812954;
   fWeightMatrix0to1[4][2] = 1.38751669536219;
   fWeightMatrix0to1[5][2] = 0.753778837540364;
   fWeightMatrix0to1[6][2] = 1.98777994835451;
   fWeightMatrix0to1[7][2] = 1.28307264545306;
   fWeightMatrix0to1[8][2] = -0.727831636506411;
   fWeightMatrix0to1[9][2] = 0.464180481253962;
   fWeightMatrix0to1[10][2] = -0.314036731407536;
   fWeightMatrix0to1[0][3] = -2.88937795820609;
   fWeightMatrix0to1[1][3] = 0.721939513398979;
   fWeightMatrix0to1[2][3] = 0.667056280493056;
   fWeightMatrix0to1[3][3] = -4.85414267243302;
   fWeightMatrix0to1[4][3] = 1.97072172975472;
   fWeightMatrix0to1[5][3] = -6.14593310814021;
   fWeightMatrix0to1[6][3] = -0.00821426191883173;
   fWeightMatrix0to1[7][3] = 3.15990508127475;
   fWeightMatrix0to1[8][3] = 0.177078101275718;
   fWeightMatrix0to1[9][3] = 0.348372703203679;
   fWeightMatrix0to1[10][3] = -0.866520857722809;
   fWeightMatrix0to1[0][4] = 6.64248766397185;
   fWeightMatrix0to1[1][4] = -4.2725348125098;
   fWeightMatrix0to1[2][4] = 7.72387000957437;
   fWeightMatrix0to1[3][4] = -5.08028332193012;
   fWeightMatrix0to1[4][4] = -1.38921148116583;
   fWeightMatrix0to1[5][4] = 4.04134584038913;
   fWeightMatrix0to1[6][4] = 0.102106873439705;
   fWeightMatrix0to1[7][4] = 1.20275113397968;
   fWeightMatrix0to1[8][4] = -6.90039800651757;
   fWeightMatrix0to1[9][4] = 1.8770276183058;
   fWeightMatrix0to1[10][4] = -6.21151348014221;
   fWeightMatrix0to1[0][5] = -0.379322811510109;
   fWeightMatrix0to1[1][5] = -5.89931683648007;
   fWeightMatrix0to1[2][5] = -10.8221259245101;
   fWeightMatrix0to1[3][5] = -1.24423179759305;
   fWeightMatrix0to1[4][5] = -0.766977526392966;
   fWeightMatrix0to1[5][5] = 0.0034147010274247;
   fWeightMatrix0to1[6][5] = -1.12524079837039;
   fWeightMatrix0to1[7][5] = -0.625662690515472;
   fWeightMatrix0to1[8][5] = 2.97804701027762;
   fWeightMatrix0to1[9][5] = 6.3583486818188;
   fWeightMatrix0to1[10][5] = -5.38273576362483;
   fWeightMatrix0to1[0][6] = -2.80857235876258;
   fWeightMatrix0to1[1][6] = 3.14143076620445;
   fWeightMatrix0to1[2][6] = 0.361417426287705;
   fWeightMatrix0to1[3][6] = 1.48398719186898;
   fWeightMatrix0to1[4][6] = 0.981651545016262;
   fWeightMatrix0to1[5][6] = -3.22437318858862;
   fWeightMatrix0to1[6][6] = 2.7088973442676;
   fWeightMatrix0to1[7][6] = 0.824866428205415;
   fWeightMatrix0to1[8][6] = 5.02859503913435;
   fWeightMatrix0to1[9][6] = -1.79155822092534;
   fWeightMatrix0to1[10][6] = 2.40354137636865;
   fWeightMatrix0to1[0][7] = -5.42442346662957;
   fWeightMatrix0to1[1][7] = 2.16149916801421;
   fWeightMatrix0to1[2][7] = -0.979546649824152;
   fWeightMatrix0to1[3][7] = 1.05829327356669;
   fWeightMatrix0to1[4][7] = 2.81746429551631;
   fWeightMatrix0to1[5][7] = 0.010275397631382;
   fWeightMatrix0to1[6][7] = -2.29884416211426;
   fWeightMatrix0to1[7][7] = -1.46436649220915;
   fWeightMatrix0to1[8][7] = 0.509833142526032;
   fWeightMatrix0to1[9][7] = 1.37289214046918;
   fWeightMatrix0to1[10][7] = 1.68527751542123;
   fWeightMatrix0to1[0][8] = -7.62050800642277;
   fWeightMatrix0to1[1][8] = -3.44939233953553;
   fWeightMatrix0to1[2][8] = 2.94347142388487;
   fWeightMatrix0to1[3][8] = 1.64187458380603;
   fWeightMatrix0to1[4][8] = 2.69105530770647;
   fWeightMatrix0to1[5][8] = 1.87335753452446;
   fWeightMatrix0to1[6][8] = -5.93826458905584;
   fWeightMatrix0to1[7][8] = 0.090459137463563;
   fWeightMatrix0to1[8][8] = -1.85609143540378;
   fWeightMatrix0to1[9][8] = -3.74752055042097;
   fWeightMatrix0to1[10][8] = -3.34218504316598;
   fWeightMatrix0to1[0][9] = -1.89453709275683;
   fWeightMatrix0to1[1][9] = 0.844896366465282;
   fWeightMatrix0to1[2][9] = -1.8632393338809;
   fWeightMatrix0to1[3][9] = 1.82627069181223;
   fWeightMatrix0to1[4][9] = 2.35137017976138;
   fWeightMatrix0to1[5][9] = 1.18553282997143;
   fWeightMatrix0to1[6][9] = 0.406131508633305;
   fWeightMatrix0to1[7][9] = -2.58071474866134;
   fWeightMatrix0to1[8][9] = -2.2175291824125;
   fWeightMatrix0to1[9][9] = -0.884884294075326;
   fWeightMatrix0to1[10][9] = 2.32909213220569;
   fWeightMatrix0to1[0][10] = -1.98717671660727;
   fWeightMatrix0to1[1][10] = -2.27434169611597;
   fWeightMatrix0to1[2][10] = 2.81750253150607;
   fWeightMatrix0to1[3][10] = -2.21994070216966;
   fWeightMatrix0to1[4][10] = -1.9044177021108;
   fWeightMatrix0to1[5][10] = 2.3182538707374;
   fWeightMatrix0to1[6][10] = -1.29074895396594;
   fWeightMatrix0to1[7][10] = -0.710056593193704;
   fWeightMatrix0to1[8][10] = -0.87627249886854;
   fWeightMatrix0to1[9][10] = -0.652376966128002;
   fWeightMatrix0to1[10][10] = -5.75707867239286;
   fWeightMatrix0to1[0][11] = -0.0349693386557678;
   fWeightMatrix0to1[1][11] = -2.88314783143223;
   fWeightMatrix0to1[2][11] = 3.75195557006595;
   fWeightMatrix0to1[3][11] = -1.49851614410607;
   fWeightMatrix0to1[4][11] = -0.513063062712712;
   fWeightMatrix0to1[5][11] = -0.0667468696301938;
   fWeightMatrix0to1[6][11] = -1.29846558374451;
   fWeightMatrix0to1[7][11] = -1.51630052122801;
   fWeightMatrix0to1[8][11] = -0.438691533115823;
   fWeightMatrix0to1[9][11] = 0.655910939786456;
   fWeightMatrix0to1[10][11] = -6.08415494050462;
   // weight matrix from layer 1 to 2
   fWeightMatrix1to2[0][0] = 0.596256256515993;
   fWeightMatrix1to2[1][0] = -1.63603210616153;
   fWeightMatrix1to2[2][0] = -1.8758971471104;
   fWeightMatrix1to2[3][0] = 0.837845437644404;
   fWeightMatrix1to2[4][0] = -1.33652838594618;
   fWeightMatrix1to2[5][0] = -2.38235180129486;
   fWeightMatrix1to2[6][0] = 1.01419165671615;
   fWeightMatrix1to2[7][0] = 2.03511823240058;
   fWeightMatrix1to2[8][0] = 0.784401577527358;
   fWeightMatrix1to2[9][0] = -0.686653697130301;
   fWeightMatrix1to2[10][0] = -0.415580731621021;
   fWeightMatrix1to2[11][0] = 0.564481403913334;
   fWeightMatrix1to2[12][0] = -2.72266620032032;
   fWeightMatrix1to2[13][0] = 3.0347825049466;
   fWeightMatrix1to2[14][0] = 2.94833386192374;
   fWeightMatrix1to2[15][0] = -0.544379748162573;
   fWeightMatrix1to2[0][1] = -0.507513441502458;
   fWeightMatrix1to2[1][1] = -0.432058119221266;
   fWeightMatrix1to2[2][1] = -1.31932616330129;
   fWeightMatrix1to2[3][1] = -3.87081040064855;
   fWeightMatrix1to2[4][1] = 4.1433899255635;
   fWeightMatrix1to2[5][1] = -1.09201141378693;
   fWeightMatrix1to2[6][1] = -3.2531588469027;
   fWeightMatrix1to2[7][1] = -0.923294479285185;
   fWeightMatrix1to2[8][1] = 1.27188796865282;
   fWeightMatrix1to2[9][1] = 0.389453666516266;
   fWeightMatrix1to2[10][1] = 1.32937489128212;
   fWeightMatrix1to2[11][1] = -2.90085553801535;
   fWeightMatrix1to2[12][1] = 0.225579498719;
   fWeightMatrix1to2[13][1] = 0.337768665358344;
   fWeightMatrix1to2[14][1] = -1.99338828105647;
   fWeightMatrix1to2[15][1] = 0.298306546762954;
   fWeightMatrix1to2[0][2] = 0.723939549341889;
   fWeightMatrix1to2[1][2] = -0.37204054946825;
   fWeightMatrix1to2[2][2] = -2.26973053644258;
   fWeightMatrix1to2[3][2] = 4.24320605160699;
   fWeightMatrix1to2[4][2] = -3.63426804724236;
   fWeightMatrix1to2[5][2] = -0.81378381662309;
   fWeightMatrix1to2[6][2] = 4.54223267445293;
   fWeightMatrix1to2[7][2] = 1.13973120366868;
   fWeightMatrix1to2[8][2] = -0.728986521596731;
   fWeightMatrix1to2[9][2] = 0.680798925833844;
   fWeightMatrix1to2[10][2] = 2.56298143011384;
   fWeightMatrix1to2[11][2] = -6.89495166348596;
   fWeightMatrix1to2[12][2] = -3.56084271119816;
   fWeightMatrix1to2[13][2] = -0.529670387324842;
   fWeightMatrix1to2[14][2] = 1.57764067825305;
   fWeightMatrix1to2[15][2] = -1.91427417399081;
   fWeightMatrix1to2[0][3] = -1.56065465562619;
   fWeightMatrix1to2[1][3] = 0.833289322628101;
   fWeightMatrix1to2[2][3] = 0.219958992051173;
   fWeightMatrix1to2[3][3] = -3.87459444558736;
   fWeightMatrix1to2[4][3] = 2.80590915088132;
   fWeightMatrix1to2[5][3] = -1.16510311353656;
   fWeightMatrix1to2[6][3] = -0.937376916656339;
   fWeightMatrix1to2[7][3] = 0.186254071099704;
   fWeightMatrix1to2[8][3] = 2.55575927096677;
   fWeightMatrix1to2[9][3] = -0.463907844187441;
   fWeightMatrix1to2[10][3] = -0.990413016965075;
   fWeightMatrix1to2[11][3] = 1.39232108496539;
   fWeightMatrix1to2[12][3] = 0.11029491312446;
   fWeightMatrix1to2[13][3] = 1.98258920916644;
   fWeightMatrix1to2[14][3] = -1.50593273797894;
   fWeightMatrix1to2[15][3] = -0.861084281141328;
   fWeightMatrix1to2[0][4] = -2.02300642267646;
   fWeightMatrix1to2[1][4] = 0.951885748446302;
   fWeightMatrix1to2[2][4] = 0.097172551340078;
   fWeightMatrix1to2[3][4] = -0.337354597621603;
   fWeightMatrix1to2[4][4] = 0.195498372863067;
   fWeightMatrix1to2[5][4] = 0.553482321430671;
   fWeightMatrix1to2[6][4] = 0.861851029855897;
   fWeightMatrix1to2[7][4] = -1.93571103837429;
   fWeightMatrix1to2[8][4] = 1.90038359233534;
   fWeightMatrix1to2[9][4] = 1.00868619734233;
   fWeightMatrix1to2[10][4] = -1.3787552260567;
   fWeightMatrix1to2[11][4] = 0.130801746069764;
   fWeightMatrix1to2[12][4] = 2.62434014724867;
   fWeightMatrix1to2[13][4] = 0.368275596684967;
   fWeightMatrix1to2[14][4] = -0.630790280386604;
   fWeightMatrix1to2[15][4] = -0.0663079781297274;
   fWeightMatrix1to2[0][5] = -2.01606242035415;
   fWeightMatrix1to2[1][5] = -0.934533303675654;
   fWeightMatrix1to2[2][5] = 2.90286622586355;
   fWeightMatrix1to2[3][5] = 3.01985197271249;
   fWeightMatrix1to2[4][5] = -3.64565621561289;
   fWeightMatrix1to2[5][5] = 0.150732360339569;
   fWeightMatrix1to2[6][5] = 0.0499609933602062;
   fWeightMatrix1to2[7][5] = -1.70310610122823;
   fWeightMatrix1to2[8][5] = -3.46389341711162;
   fWeightMatrix1to2[9][5] = -1.50147055108592;
   fWeightMatrix1to2[10][5] = -1.98376372969143;
   fWeightMatrix1to2[11][5] = 2.24810624340207;
   fWeightMatrix1to2[12][5] = -0.145862273310753;
   fWeightMatrix1to2[13][5] = -0.596192364318334;
   fWeightMatrix1to2[14][5] = 0.0399344757476093;
   fWeightMatrix1to2[15][5] = -0.118848741787405;
   fWeightMatrix1to2[0][6] = -1.8722478237396;
   fWeightMatrix1to2[1][6] = -1.62402454246544;
   fWeightMatrix1to2[2][6] = -1.36352198066394;
   fWeightMatrix1to2[3][6] = -2.76031460142373;
   fWeightMatrix1to2[4][6] = 2.17821334854519;
   fWeightMatrix1to2[5][6] = -1.68796337475578;
   fWeightMatrix1to2[6][6] = 1.85296876993466;
   fWeightMatrix1to2[7][6] = -2.35424538254238;
   fWeightMatrix1to2[8][6] = -0.667815092315457;
   fWeightMatrix1to2[9][6] = -0.333102365206959;
   fWeightMatrix1to2[10][6] = -4.51845869906424;
   fWeightMatrix1to2[11][6] = -4.1264146630968;
   fWeightMatrix1to2[12][6] = -2.73581808248787;
   fWeightMatrix1to2[13][6] = -0.799346961046773;
   fWeightMatrix1to2[14][6] = -2.75065592180356;
   fWeightMatrix1to2[15][6] = -1.50013220841017;
   fWeightMatrix1to2[0][7] = -1.88248090637849;
   fWeightMatrix1to2[1][7] = 0.143639799282598;
   fWeightMatrix1to2[2][7] = -1.81015318009224;
   fWeightMatrix1to2[3][7] = -2.04947371218845;
   fWeightMatrix1to2[4][7] = 2.62478100505295;
   fWeightMatrix1to2[5][7] = -0.998377697756464;
   fWeightMatrix1to2[6][7] = -0.308017916567982;
   fWeightMatrix1to2[7][7] = -1.11572240994476;
   fWeightMatrix1to2[8][7] = 0.586152113349926;
   fWeightMatrix1to2[9][7] = 1.84102906018905;
   fWeightMatrix1to2[10][7] = 1.350603643502;
   fWeightMatrix1to2[11][7] = -0.328886939416064;
   fWeightMatrix1to2[12][7] = -1.25603906851591;
   fWeightMatrix1to2[13][7] = -1.42311056278356;
   fWeightMatrix1to2[14][7] = -0.922578966459089;
   fWeightMatrix1to2[15][7] = -1.49760377886097;
   fWeightMatrix1to2[0][8] = 0.155321714806815;
   fWeightMatrix1to2[1][8] = -0.519066156608557;
   fWeightMatrix1to2[2][8] = 2.03988121427212;
   fWeightMatrix1to2[3][8] = 1.24724933435293;
   fWeightMatrix1to2[4][8] = 1.9060378749336;
   fWeightMatrix1to2[5][8] = -0.434402177584373;
   fWeightMatrix1to2[6][8] = -1.15427015440333;
   fWeightMatrix1to2[7][8] = 0.424733379450511;
   fWeightMatrix1to2[8][8] = 0.74512134103848;
   fWeightMatrix1to2[9][8] = -0.731537151410651;
   fWeightMatrix1to2[10][8] = -2.52789970796686;
   fWeightMatrix1to2[11][8] = 1.2778692170701;
   fWeightMatrix1to2[12][8] = 4.37954138070627;
   fWeightMatrix1to2[13][8] = -0.798757160098019;
   fWeightMatrix1to2[14][8] = -1.97002968139207;
   fWeightMatrix1to2[15][8] = -0.157239476643262;
   fWeightMatrix1to2[0][9] = 1.08091838778474;
   fWeightMatrix1to2[1][9] = 1.27990274929015;
   fWeightMatrix1to2[2][9] = 0.810624819266073;
   fWeightMatrix1to2[3][9] = 0.222262652552669;
   fWeightMatrix1to2[4][9] = 2.80349814438896;
   fWeightMatrix1to2[5][9] = -1.05253707497835;
   fWeightMatrix1to2[6][9] = -4.31821952812475;
   fWeightMatrix1to2[7][9] = -1.1787105130542;
   fWeightMatrix1to2[8][9] = -2.97795314763818;
   fWeightMatrix1to2[9][9] = -1.71763946174166;
   fWeightMatrix1to2[10][9] = -1.49818514809701;
   fWeightMatrix1to2[11][9] = 5.39966907470609;
   fWeightMatrix1to2[12][9] = -2.60413507898501;
   fWeightMatrix1to2[13][9] = 1.1102489055489;
   fWeightMatrix1to2[14][9] = -2.50650812262301;
   fWeightMatrix1to2[15][9] = 1.37019246132386;
   fWeightMatrix1to2[0][10] = -1.18766489617596;
   fWeightMatrix1to2[1][10] = -0.4474120779852;
   fWeightMatrix1to2[2][10] = -1.33882807377157;
   fWeightMatrix1to2[3][10] = -4.23502442202694;
   fWeightMatrix1to2[4][10] = -0.202592450449594;
   fWeightMatrix1to2[5][10] = 0.840599735159708;
   fWeightMatrix1to2[6][10] = -2.86549054691563;
   fWeightMatrix1to2[7][10] = -1.88409714510328;
   fWeightMatrix1to2[8][10] = -3.06005053578301;
   fWeightMatrix1to2[9][10] = -1.03098951004661;
   fWeightMatrix1to2[10][10] = 2.48730513335925;
   fWeightMatrix1to2[11][10] = -6.92888996892929;
   fWeightMatrix1to2[12][10] = 0.781547561988181;
   fWeightMatrix1to2[13][10] = -3.07863214306529;
   fWeightMatrix1to2[14][10] = -2.55260038118702;
   fWeightMatrix1to2[15][10] = -1.97855534286707;
   fWeightMatrix1to2[0][11] = -1.27286268262769;
   fWeightMatrix1to2[1][11] = -1.8778953188732;
   fWeightMatrix1to2[2][11] = -0.398990649859608;
   fWeightMatrix1to2[3][11] = -0.0919855800618652;
   fWeightMatrix1to2[4][11] = -3.45416330416141;
   fWeightMatrix1to2[5][11] = 1.41562818527331;
   fWeightMatrix1to2[6][11] = -0.768182943172279;
   fWeightMatrix1to2[7][11] = -1.28389607911376;
   fWeightMatrix1to2[8][11] = 0.571283478775252;
   fWeightMatrix1to2[9][11] = -2.49276701148946;
   fWeightMatrix1to2[10][11] = -0.206629980140555;
   fWeightMatrix1to2[11][11] = 0.575690346419082;
   fWeightMatrix1to2[12][11] = -0.637616606704125;
   fWeightMatrix1to2[13][11] = -1.90031015988306;
   fWeightMatrix1to2[14][11] = -1.52967620809837;
   fWeightMatrix1to2[15][11] = -1.09540785946886;
   // weight matrix from layer 2 to 3
   fWeightMatrix2to3[0][0] = 0.136420444607551;
   fWeightMatrix2to3[0][1] = 1.64597335831696;
   fWeightMatrix2to3[0][2] = -2.26637181658364;
   fWeightMatrix2to3[0][3] = 1.41271036407034;
   fWeightMatrix2to3[0][4] = -2.50311385445992;
   fWeightMatrix2to3[0][5] = -1.36833225123061;
   fWeightMatrix2to3[0][6] = 2.04056530476676;
   fWeightMatrix2to3[0][7] = 0.397118099643764;
   fWeightMatrix2to3[0][8] = -2.73178477913806;
   fWeightMatrix2to3[0][9] = -1.461366204325;
   fWeightMatrix2to3[0][10] = 1.18106739554657;
   fWeightMatrix2to3[0][11] = 5.31886145964248;
   fWeightMatrix2to3[0][12] = -4.46688832680153;
   fWeightMatrix2to3[0][13] = -2.17111651761436;
   fWeightMatrix2to3[0][14] = 2.39009654314395;
   fWeightMatrix2to3[0][15] = 0.901907127217752;
   fWeightMatrix2to3[0][16] = -0.894575773967926;
}

inline double ReadMLP_ANN::GetMvaValue__( const std::vector<double>& inputValues ) const
{
   if (inputValues.size() != (unsigned int)fLayerSize[0]-1) {
      std::cout << "Input vector needs to be of size " << fLayerSize[0]-1 << std::endl;
      return 0;
   }

   for (int l=0; l<fLayers; l++)
      for (int i=0; i<fLayerSize[l]; i++) fWeights[l][i]=0;

   for (int l=0; l<fLayers-1; l++)
      fWeights[l][fLayerSize[l]-1]=1;

   for (int i=0; i<fLayerSize[0]-1; i++)
      fWeights[0][i]=inputValues[i];

   // layer 0 to 1
   for (int o=0; o<fLayerSize[1]-1; o++) {
      for (int i=0; i<fLayerSize[0]; i++) {
         double inputVal = fWeightMatrix0to1[o][i] * fWeights[0][i];
         fWeights[1][o] += inputVal;
      }
      fWeights[1][o] = ActivationFnc(fWeights[1][o]);
   }
   // layer 1 to 2
   for (int o=0; o<fLayerSize[2]-1; o++) {
      for (int i=0; i<fLayerSize[1]; i++) {
         double inputVal = fWeightMatrix1to2[o][i] * fWeights[1][i];
         fWeights[2][o] += inputVal;
      }
      fWeights[2][o] = ActivationFnc(fWeights[2][o]);
   }
   // layer 2 to 3
   for (int o=0; o<fLayerSize[3]; o++) {
      for (int i=0; i<fLayerSize[2]; i++) {
         double inputVal = fWeightMatrix2to3[o][i] * fWeights[2][i];
         fWeights[3][o] += inputVal;
      }
      fWeights[3][o] = OutputActivationFnc(fWeights[3][o]);
   }

   return fWeights[3][0];
}

double ReadMLP_ANN::ActivationFnc(double x) const {
   // sigmoid
   return 1.0/(1.0+exp(-x));
}
double ReadMLP_ANN::OutputActivationFnc(double x) const {
   // sigmoid
   return 1.0/(1.0+exp(-x));
}
   
// Clean up
inline void ReadMLP_ANN::Clear() 
{
   // clean up the arrays
   for (int lIdx = 0; lIdx < 4; lIdx++) {
      delete[] fWeights[lIdx];
   }
}
   inline double ReadMLP_ANN::GetMvaValue( const std::vector<double>& inputValues ) const
   {
      // classifier response value
      double retval = 0;

      // classifier response, sanity check first
      if (!IsStatusClean()) {
         std::cout << "Problem in class \"" << fClassName << "\": cannot return classifier response"
                   << " because status is dirty" << std::endl;
         retval = 0;
      }
      else {
         if (IsNormalised()) {
            // normalise variables
            std::vector<double> iV;
            iV.reserve(inputValues.size());
            int ivar = 0;
            for (std::vector<double>::const_iterator varIt = inputValues.begin();
                 varIt != inputValues.end(); varIt++, ivar++) {
               iV.push_back(NormVariable( *varIt, fVmin[ivar], fVmax[ivar] ));
            }
            Transform( iV, -1 );
            retval = GetMvaValue__( iV );
         }
         else {
            std::vector<double> iV;
            int ivar = 0;
            for (std::vector<double>::const_iterator varIt = inputValues.begin();
                 varIt != inputValues.end(); varIt++, ivar++) {
               iV.push_back(*varIt);
            }
            Transform( iV, -1 );
            retval = GetMvaValue__( iV );
         }
      }

      return retval;
   }

//_______________________________________________________________________
inline void ReadMLP_ANN::InitTransform_1()
{
   // Normalization transformation, initialisation
   fMin_1[0][0] = 110.048698425;
   fMax_1[0][0] = 1277.92980957;
   fMin_1[1][0] = 110.057556152;
   fMax_1[1][0] = 1572.76037598;
   fMin_1[2][0] = 110.048698425;
   fMax_1[2][0] = 1572.76037598;
   fMin_1[0][1] = 5.00075817108;
   fMax_1[0][1] = 29.9497737885;
   fMin_1[1][1] = 5.00135278702;
   fMax_1[1][1] = 29.9984378815;
   fMin_1[2][1] = 5.00075817108;
   fMax_1[2][1] = 29.9984378815;
   fMin_1[0][2] = -1;
   fMax_1[0][2] = 1;
   fMin_1[1][2] = -1;
   fMax_1[1][2] = 1;
   fMin_1[2][2] = -1;
   fMax_1[2][2] = 1;
   fMin_1[0][3] = -2.4711689949;
   fMax_1[0][3] = 2.37911462784;
   fMin_1[1][3] = -2.48411560059;
   fMax_1[1][3] = 2.49880051613;
   fMin_1[2][3] = -2.48411560059;
   fMax_1[2][3] = 2.49880051613;
   fMin_1[0][4] = 280.2293396;
   fMax_1[0][4] = 1251.49438477;
   fMin_1[1][4] = 280.020294189;
   fMax_1[1][4] = 1289.47937012;
   fMin_1[2][4] = 280.020294189;
   fMax_1[2][4] = 1289.47937012;
   fMin_1[0][5] = 0.0557334087789;
   fMax_1[0][5] = 300.527191162;
   fMin_1[1][5] = 0.000537815736607;
   fMax_1[1][5] = 215.792510986;
   fMin_1[2][5] = 0.000537815736607;
   fMax_1[2][5] = 300.527191162;
   fMin_1[0][6] = 117.352531433;
   fMax_1[0][6] = 2347.48510742;
   fMin_1[1][6] = 112.003395081;
   fMax_1[1][6] = 4504.87304688;
   fMin_1[2][6] = 112.003395081;
   fMax_1[2][6] = 4504.87304688;
   fMin_1[0][7] = 0;
   fMax_1[0][7] = 5;
   fMin_1[1][7] = 0;
   fMax_1[1][7] = 6;
   fMin_1[2][7] = 0;
   fMax_1[2][7] = 6;
   fMin_1[0][8] = 1;
   fMax_1[0][8] = 11;
   fMin_1[1][8] = 1;
   fMax_1[1][8] = 14;
   fMin_1[2][8] = 1;
   fMax_1[2][8] = 14;
   fMin_1[0][9] = 20.0573444366;
   fMax_1[0][9] = 1057.04370117;
   fMin_1[1][9] = -999;
   fMax_1[1][9] = 1378.42883301;
   fMin_1[2][9] = -999;
   fMax_1[2][9] = 1378.42883301;
   fMin_1[0][10] = 6.27087429166e-05;
   fMax_1[0][10] = 4.95768356323;
   fMin_1[1][10] = -999;
   fMax_1[1][10] = 5.38026332855;
   fMin_1[2][10] = -999;
   fMax_1[2][10] = 5.38026332855;
}

//_______________________________________________________________________
inline void ReadMLP_ANN::Transform_1( std::vector<double>& iv, int cls) const
{
   // Normalization transformation
   if (cls < 0 || cls > 2) {
   if (2 > 1 ) cls = 2;
      else cls = 2;
   }
   const int nVar = 11;

   // get indices of used variables

   // define the indices of the variables which are transformed by this transformation
   static std::vector<int> indicesGet;
   static std::vector<int> indicesPut;

   if ( indicesGet.empty() ) { 
      indicesGet.reserve(fNvars);
      indicesGet.push_back( 0);
      indicesGet.push_back( 1);
      indicesGet.push_back( 2);
      indicesGet.push_back( 3);
      indicesGet.push_back( 4);
      indicesGet.push_back( 5);
      indicesGet.push_back( 6);
      indicesGet.push_back( 7);
      indicesGet.push_back( 8);
      indicesGet.push_back( 9);
      indicesGet.push_back( 10);
   } 
   if ( indicesPut.empty() ) { 
      indicesPut.reserve(fNvars);
      indicesPut.push_back( 0);
      indicesPut.push_back( 1);
      indicesPut.push_back( 2);
      indicesPut.push_back( 3);
      indicesPut.push_back( 4);
      indicesPut.push_back( 5);
      indicesPut.push_back( 6);
      indicesPut.push_back( 7);
      indicesPut.push_back( 8);
      indicesPut.push_back( 9);
      indicesPut.push_back( 10);
   } 

   static std::vector<double> dv;
   dv.resize(nVar);
   for (int ivar=0; ivar<nVar; ivar++) dv[ivar] = iv[indicesGet.at(ivar)];
   for (int ivar=0;ivar<11;ivar++) {
      double offset = fMin_1[cls][ivar];
      double scale  = 1.0/(fMax_1[cls][ivar]-fMin_1[cls][ivar]);
      iv[indicesPut.at(ivar)] = (dv[ivar]-offset)*scale * 2 - 1;
   }
}

//_______________________________________________________________________
inline void ReadMLP_ANN::InitTransform()
{
   InitTransform_1();
}

//_______________________________________________________________________
inline void ReadMLP_ANN::Transform( std::vector<double>& iv, int sigOrBgd ) const
{
   Transform_1( iv, sigOrBgd );
}
