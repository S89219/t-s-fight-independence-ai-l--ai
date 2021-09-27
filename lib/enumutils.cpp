/*
 * Copyright (c) 2021  Faraz Fallahi <fffaraz@gmail.com>
 *
 * Use of this source code is governed by an MIT-style
 * license that can be found in the LICENSE file
 */

#include "enumutils.hpp"

#include <iostream>
#include <unordered_map>

using namespace Farazlib;

std::set<AssetTag> EnumUtils::assetTag(const std::string& key)
{
    std::unordered_map<std::string, AssetTag> map {
        { "AGG", AssetTag::TotalBond }, // iShares Core U.S. Aggregate Bond ETF
        { "BND", AssetTag::TotalBond }, // Vanguard Total Bond Market Index Fund ETF Shares
        { "BIV", AssetTag::TotalBond }, //
        { "BSV", AssetTag::TotalBond }, //
        { "ILTB", AssetTag::TotalBond }, //
        { "IUSB", AssetTag::TotalBond }, // iShares Core Total USD Bond Market ETF
        { "BLV", AssetTag::TotalBond }, //
        { "IMTB", AssetTag::TotalBond }, //
        { "VMBS", AssetTag::TotalBond }, //
        { "ISTB", AssetTag::TotalBond }, //

        { "IAGG", AssetTag::IntlBond }, // iShares Core International Aggregate Bond ETF
        { "BNDX", AssetTag::IntlBond }, // Vanguard Total International Bond Index Fund ETF

        { "EDV", AssetTag::LongTermBond }, // Vanguard Extended Duration Treasury ETF
        { "TLT", AssetTag::LongTermBond }, //
        { "SPTL", AssetTag::LongTermBond }, //

        { "ITOT", AssetTag::TotalMarket }, // iShares Core S&P Total US Stock Market ETF
        { "VTI", AssetTag::TotalMarket }, // Vanguard Total Stock Market Index Fund ETF
        { "SCHB", AssetTag::TotalMarket }, // Schwab US Broad Market ETF
        { "IWV", AssetTag::TotalMarket }, // iShares Russell 3000 ETF
        { "VT", AssetTag::TotalMarket }, //

        { "SPY", AssetTag::SandP500 }, // SPDR S&P 500 ETF Trust
        { "IVV", AssetTag::SandP500 }, // iShares Core S&P 500 ETF
        { "VOO", AssetTag::SandP500 }, // Vanguard 500 Index Fund ETF
        { "SPLG", AssetTag::SandP500 }, // SPDR Portfolio S&P 500 ETF
        { "VV", AssetTag::SandP500 }, // Vanguard Large-Cap Index Fund ETF
        { "RSP", AssetTag::SandP500 }, // Invesco S&P 500 Eql Wght ETF

        { "VONE", AssetTag::Russell1000 }, // Vanguard Russell 1000 Index Fund ETF
        { "IWB", AssetTag::Russell1000 }, // iShares Russell 1000 ETF
        { "SCHK", AssetTag::Russell1000 }, // Schwab 1000 Index ETF
        { "SCHX", AssetTag::Russell1000 }, // Schwab US Large-Cap ETF
        { "SPTM", AssetTag::Russell1000 }, // SPDR Portfolio S&P 1500 Composite Stock Market ETF

        { "IXUS", AssetTag::TotalIntl }, // iShares Core MSCI Total International Stock ETF
        { "VXUS", AssetTag::TotalIntl }, // Vanguard Total International Stock Index Fund ETF
        { "VEU", AssetTag::TotalIntl }, // Vanguard FTSE All World ex US ETF
        { "VEA", AssetTag::TotalIntl }, // Vanguard Developed Markets Index Fund ETF
        { "IEUR", AssetTag::TotalIntl }, // iShares Core MSCI Europe ETF
        { "IPAC", AssetTag::TotalIntl }, //
        { "VSS", AssetTag::TotalIntl },
        { "VWO", AssetTag::TotalIntl },

        { "VTV", AssetTag::LargeValue }, // Vanguard Value Index Fund ETF
        { "MGV", AssetTag::LargeValue }, // Vanguard Mega Cap Value Index Fund ETF
        { "IUSV", AssetTag::LargeValue }, // iShares Core S&P US Value ETF
        { "DTD", AssetTag::LargeValue }, //
        { "DJD", AssetTag::LargeValue }, //
        { "VOE", AssetTag::LargeValue }, //

        { "IVW", AssetTag::LargeGrowth }, // iShares S&P 500 Growth ETF
        { "VUG", AssetTag::LargeGrowth }, // Vanguard Growth Index Fund ETF
        { "SCHG", AssetTag::LargeGrowth },
        { "IUSG", AssetTag::LargeGrowth }, // iShares Core S&P US Growth ETF
        { "MGK", AssetTag::LargeGrowth },
        { "QQQ", AssetTag::LargeGrowth },
        { "QQQE", AssetTag::LargeGrowth },
        { "VGT", AssetTag::LargeGrowth },
        { "VOT", AssetTag::LargeGrowth },
        { "VHT", AssetTag::LargeGrowth },

        { "SLQD", AssetTag::ShortCorpBd }, // iShares 0-5 Year Investment Grade Corporate Bd ETF
        { "IGSB", AssetTag::ShortCorpBd }, // iShares 1-5 Year Investment Grade Corporate Bd ETF
        { "IGIB", AssetTag::ShortCorpBd },

        { "IGLB", AssetTag::LongCorpBd }, // iShares 10+ Year Investment Grade Corp Bond ETF
        { "VCLT", AssetTag::LongCorpBd }, // Vanguard Long-Term Corporate Bond Idx Fund ETF

        { "REET", AssetTag::REIT }, //
        { "RWR", AssetTag::REIT }, //
        { "SCHH", AssetTag::REIT }, //
        { "USRT", AssetTag::REIT }, //
        { "VNQ", AssetTag::REIT }, //
        { "VNQI", AssetTag::REIT }, //

        { "SGOL", AssetTag::PreciousMetal }, //
        { "SIVR", AssetTag::PreciousMetal }, //

        { "TECL", AssetTag::Technology }, // Direxion Daily Technology Bull 3X Shares ETF
        { "CXSE", AssetTag::China }, // WisdomTree Trust China ex State Owned Enterprises ETF
        { "DGRO", AssetTag::HighYield }, // iShares Core Dividend Growth ETF
        { "IPO", AssetTag::ActiveETF }, // Renaissance IPO ETF
        { "STIP", AssetTag::ShortTermBond }, // iShares 0-5 Year TIPS Bond ETF
        { "USHY", AssetTag::CorporateBond }, //
        { "VAW", AssetTag::NaturalResources }, //
        { "VCR", AssetTag::ConsumerCyclical }, //
        { "VDC", AssetTag::ConsumerDefensive }, //
        { "VFH", AssetTag::FinancialServices }, //
        { "VIG", AssetTag::HighYield }, //
        { "VIS", AssetTag::Industrials }, //
        { "VPU", AssetTag::Utilities }, //
        { "SOXL", AssetTag::Technology }, //
        { "SPHY", AssetTag::HighYield }, //

        { "VDE", AssetTag::Energy }, //
        { "XLE", AssetTag::Energy }, //

        { "VOX", AssetTag::Communication }, //
        { "XLC", AssetTag::Communication }, //

        { "DEM", AssetTag::IntlHighYield }, //
        { "VYMI", AssetTag::IntlHighYield }, //

        { "ARKF", AssetTag::ActiveETF }, //
        { "ARKG", AssetTag::ActiveETF }, //
        { "ARKK", AssetTag::ActiveETF }, //
        { "ARKQ", AssetTag::ActiveETF }, //
        { "ARKW", AssetTag::ActiveETF }, //
        { "PFF", AssetTag::ActiveETF }, //
        { "QYLD", AssetTag::ActiveETF }, //

        { "MUB", AssetTag::MuniBond }, //
        { "VTEB", AssetTag::MuniBond }, //

        { "SPYD", AssetTag::HighYield }, //
        { "SPHD", AssetTag::HighYield }, //
        { "HDV", AssetTag::HighYield }, //
        { "VYM", AssetTag::HighYield }, //
        { "SCHD", AssetTag::HighYield }, //

        { "VO", AssetTag::MidCap }, //
        { "JHMM", AssetTag::MidCap }, //

        { "VB", AssetTag::SmallCap }, //
        { "VBK", AssetTag::SmallCap }, //
        { "VBR", AssetTag::SmallCap }, //
        { "VXF", AssetTag::SmallCap }, //
        { "JPSE", AssetTag::SmallCap }, //

        { "Intermediate-Term Bond", AssetTag::IntermediateBond },
        { "Technology", AssetTag::Technology },
        { "Health", AssetTag::Healthcare },
        { "Healthcare", AssetTag::Healthcare },
        { "Communications", AssetTag::Communication },
        { "Mid-Cap Growth", AssetTag::MidCapGrowth },
        { "Long-Term Bond", AssetTag::LongTermBond },
        { "Short-Term Bond", AssetTag::ShortTermBond },
        { "China Region", AssetTag::China },
        { "Diversified Emerging Mkts", AssetTag::Emerging },
        { "Large Value", AssetTag::LargeValue },
        { "Large Growth", AssetTag::LargeGrowth },
        { "Long Government", AssetTag::LongTermBond },
        { "Europe Stock", AssetTag::Europe },
        { "Corporate Bond", AssetTag::CorporateBond },
        { "Diversified Pacific/Asia", AssetTag::China },
        { "Large Blend", AssetTag::LargeBlend },
        { "Foreign Large Blend", AssetTag::ForeignLargeBlend },
        { "Foreign Large Value", AssetTag::ForeignLargeValue },
        { "Mid-Cap Blend", AssetTag::MidCapBlend },
        { "Mid-Cap Value", AssetTag::MidCapValue },
        { "Small Blend", AssetTag::SmallBlend },
        { "Small Growth", AssetTag::SmallGrowth },
        { "Small Value", AssetTag::SmallValue },
        { "Muni National Interm", AssetTag::MuniBond },
        { "Real Estate", AssetTag::REIT },
        { "Global Real Estate", AssetTag::REIT },
        { "Utilities", AssetTag::Utilities },
        { "Industrials", AssetTag::Industrials },
        { "Consumer Cyclical", AssetTag::ConsumerCyclical },
        { "Consumer Defensive", AssetTag::ConsumerDefensive },
        { "Financial Services", AssetTag::FinancialServices },
        { "Financial", AssetTag::FinancialServices },
        { "Communication Services", AssetTag::Communication },
        { "Inflation-Protected Bond", AssetTag::ShortTermBond },
        { "Trading--Leveraged Equity", AssetTag::Leveraged },
        { "High Yield Bond", AssetTag::CorporateBond },
        { "Natural Resources", AssetTag::NaturalResources },
        { "Equity Energy", AssetTag::Energy },
        { "Energy", AssetTag::Energy },
        { "Intermediate Government", AssetTag::IntermediateBond },
        { "Foreign Small/Mid Blend", AssetTag::MidCapBlend },
        { "World Stock", AssetTag::TotalMarket },
        { "Preferred Stock", AssetTag::ActiveETF }, // $PFF
    };
    if (map.contains(key)) {
        return std::set<AssetTag> { map.at(key) };
    } else if (key.size() > 0) {
        std::cout << "EnumUtils::getAssetTags [Not Found] " << key << std::endl;
    }
    return {};
}

std::string EnumUtils::to_string(AssetTag tag)
{
    static const std::unordered_map<AssetTag, std::string> map {
        { AssetTag::Unclassified, "Unclassified" },

        { AssetTag::ETF, "ETF" },
        { AssetTag::ActiveETF, "ActiveETF" },
        { AssetTag::NotETF, "NotETF" },
        { AssetTag::Foreign, "Foreign" },
        { AssetTag::REIT, "REIT" },

        { AssetTag::BlackRock, "BlackRock" },
        { AssetTag::Vanguard, "Vanguard" },
        { AssetTag::Schwab, "Schwab" },
        { AssetTag::SPDR, "SPDR" },
        { AssetTag::Invesco, "Invesco" },

        { AssetTag::Bond, "Bond" },
        { AssetTag::TotalBond, "TotalBond" },
        { AssetTag::IntlBond, "IntlBond" },
        { AssetTag::MuniBond, "MuniBond" },
        { AssetTag::ShortCorpBd, "ShortCorpBd" },
        { AssetTag::LongCorpBd, "LongCorpBd" },
        { AssetTag::IntermediateBond, "IntermediateBond" },
        { AssetTag::LongTermBond, "LongTermBond" },
        { AssetTag::ShortTermBond, "ShortTermBond" },
        { AssetTag::CorporateBond, "CorporateBond" },
        { AssetTag::WorldBondUSDHedged, "WorldBondUSDHedged" },

        { AssetTag::SandP500, "SandP500" },
        { AssetTag::TotalMarket, "TotalMarket" },
        { AssetTag::TotalIntl, "TotalIntl" },

        { AssetTag::PreciousMetal, "PreciousMetal" },
        { AssetTag::Russell1000, "Russell1000" },

        { AssetTag::HighYield, "HighYield" },
        { AssetTag::DividendGrowth, "DividendGrowth" },
        { AssetTag::IntlHighYield, "IntlHighYield" },

        { AssetTag::ForeignLargeBlend, "ForeignLargeBlend" },
        { AssetTag::ForeignLargeValue, "ForeignLargeValue" },

        { AssetTag::SmallCap, "SmallCap" },
        { AssetTag::SmallBlend, "SmallBlend" },
        { AssetTag::SmallGrowth, "SmallGrowth" },
        { AssetTag::SmallValue, "SmallValue" },

        { AssetTag::MidCap, "MidCap" },
        { AssetTag::MidCapGrowth, "MidCapGrowth" },
        { AssetTag::MidCapBlend, "MidCapBlend" },
        { AssetTag::MidCapValue, "MidCapValue" },

        { AssetTag::LargeCap, "LargeCap" },
        { AssetTag::LargeBlend, "LargeBlend" },
        { AssetTag::LargeValue, "LargeValue" },
        { AssetTag::LargeGrowth, "LargeGrowth" },

        { AssetTag::Energy, "Energy" },
        { AssetTag::Technology, "Technology" },
        { AssetTag::Healthcare, "Healthcare" },
        { AssetTag::Utilities, "Utilities" },
        { AssetTag::Communication, "Communication" },
        { AssetTag::ConsumerCyclical, "ConsumerCyclical" },
        { AssetTag::ConsumerDefensive, "ConsumerDefensive" },
        { AssetTag::Industrials, "Industrials" },
        { AssetTag::FinancialServices, "FinancialServices" },
        { AssetTag::NaturalResources, "NaturalResources" },

        { AssetTag::China, "China" },
        { AssetTag::Emerging, "Emerging" },
        { AssetTag::Europe, "Europe" },
        { AssetTag::Leveraged, "Leveraged" },
    };
    return map.contains(tag) ? map.at(tag) : "AssetTag::" + std::to_string(static_cast<int>(tag));
}
