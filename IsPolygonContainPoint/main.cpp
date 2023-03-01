﻿#include <iostream>
#include <vector>


struct Point {
    float x, y;
    Point(float x, float y) : x(x), y(y) {}
};

bool IsInside(const std::vector<Point>& polygon, Point pos)
{
    const size_t n = polygon.size();
    int count = 0;
    for (size_t i = 0; i < n; i++)
    {
        const Point& p1 = polygon[i];
        const Point& p2 = polygon[(i + 1) % n];

        if (p1.y == p2.y ||
            pos.y <= std::min(p1.y, p2.y) ||
            pos.y >  std::max(p1.y, p2.y) ||
            pos.x >  std::max(p1.x, p2.y))
        {
            continue;
        }
        else if (p1.x != p2.x)
        {
            const float xInterscet = (pos.y - p1.y) * (p2.x - p1.x) / (p2.y - p1.y) + p1.x;
            if (pos.x > xInterscet)
            {
                continue;
            }
        }
        ++count;
    }
    return (1 == (count & 1));
}

int main()
{
    Point p = Point(46.78341, 9.77273);
    std::vector<Point> polygon = {
        Point(48.78341,9.77273),
Point(48.78334,9.77279),
Point(48.78305,9.7725),
Point(48.78296,9.77235),
Point(48.78282,9.77211),
Point(48.78268,9.77153),
Point(48.78261,9.77124),
Point(48.78262,9.77093),
Point(48.78265,9.77061),
Point(48.78268,9.77033),
Point(48.7826,9.77011),
Point(48.78254,9.76999),
Point(48.78243,9.76959),
Point(48.78239,9.7694),
Point(48.78243,9.76926),
Point(48.78251,9.76917),
Point(48.78264,9.76906),
Point(48.78311,9.76716),
Point(48.78533,9.76517),
Point(48.78548,9.76553),
Point(48.78551,9.76534),
Point(48.78556,9.76525),
Point(48.78564,9.7652),
Point(48.78568,9.76513),
Point(48.78569,9.76505),
Point(48.78568,9.76482),
Point(48.7857,9.7646),
Point(48.78575,9.76448),
Point(48.78633,9.76377),
Point(48.78676,9.76443),
Point(48.78679,9.76447),
Point(48.78691,9.76418),
Point(48.78722,9.76446),
Point(48.78765,9.76491),
Point(48.78799,9.76547),
Point(48.78824,9.76599),
Point(48.78855,9.76619),
Point(48.78864,9.76612),
Point(48.78863,9.76574),
Point(48.78863,9.76556),
Point(48.78864,9.76541),
Point(48.78866,9.76526),
Point(48.78869,9.76513),
Point(48.78872,9.76503),
Point(48.78877,9.76491),
Point(48.78883,9.76479),
Point(48.78891,9.76465),
Point(48.789,9.76451),
Point(48.78925,9.76414),
Point(48.78936,9.76395),
Point(48.78939,9.76387),
Point(48.7894,9.76379),
Point(48.7894,9.76366),
Point(48.78961,9.76378),
Point(48.78988,9.76373),
Point(48.79013,9.76376),
Point(48.79414,9.77148),
Point(48.79609,9.77463),
Point(48.79695,9.77391),
Point(48.79777,9.77549),
Point(48.79785,9.77548),
Point(48.79794,9.77546),
Point(48.79804,9.77542),
Point(48.79823,9.77528),
Point(48.79836,9.77513),
Point(48.79844,9.77494),
Point(48.79853,9.77604),
Point(48.79763,9.77811),
Point(48.79831,9.77855),
Point(48.79845,9.77872),
Point(48.79854,9.77893),
Point(48.7986,9.77888),
Point(48.79876,9.77877),
Point(48.79883,9.77877),
Point(48.79891,9.77881),
Point(48.79896,9.7789),
Point(48.79896,9.779),
Point(48.79898,9.77931),
Point(48.79897,9.77949),
Point(48.79899,9.77963),
Point(48.79904,9.77974),
Point(48.7991,9.77978),
Point(48.79916,9.77978),
Point(48.79925,9.77966),
Point(48.79944,9.78044),
Point(48.80009,9.78117),
Point(48.80048,9.7815),
Point(48.80053,9.78154),
Point(48.80071,9.78182),
Point(48.80165,9.78421),
Point(48.80215,9.78514),
Point(48.80242,9.78583),
Point(48.80253,9.78703),
Point(48.80255,9.78717),
Point(48.80294,9.78883),
Point(48.80321,9.79104),
Point(48.80369,9.79493),
Point(48.80438,9.79559),
Point(48.8048,9.79524),
Point(48.80493,9.79501),
Point(48.8055,9.79354),
Point(48.80592,9.79421),
Point(48.80587,9.79424),
Point(48.80576,9.79473),
Point(48.80575,9.79478),
Point(48.80549,9.79562),
Point(48.80543,9.79585),
Point(48.80669,9.7959),
Point(48.80719,9.798),
Point(48.80775,9.79906),
Point(48.80804,9.80016),
Point(48.80831,9.80046),
Point(48.80799,9.80075),
Point(48.80756,9.80097),
Point(48.80696,9.80095),
Point(48.8082,9.80254),
Point(48.80714,9.80409),
Point(48.80576,9.80629),
Point(48.80543,9.80661),
Point(48.80555,9.80696),
Point(48.80567,9.80778),
Point(48.80573,9.80819),
Point(48.80591,9.80885),
Point(48.80596,9.80899),
Point(48.80574,9.80913),
Point(48.80528,9.80936),
Point(48.80505,9.80941),
Point(48.80536,9.80989),
Point(48.80551,9.81018),
Point(48.8052,9.81263),
Point(48.80534,9.81385),
Point(48.80523,9.81382),
Point(48.80511,9.81379),
Point(48.80499,9.81376),
Point(48.80486,9.81374),
Point(48.80476,9.81373),
Point(48.80466,9.81373),
Point(48.80455,9.81374),
Point(48.80449,9.81374),
Point(48.80434,9.81374),
Point(48.80429,9.81374),
Point(48.80421,9.81372),
Point(48.80417,9.8137),
Point(48.80412,9.81368),
Point(48.80405,9.81363),
Point(48.80399,9.81357),
Point(48.80394,9.81349),
Point(48.8039,9.8134),
Point(48.80386,9.81328),
Point(48.80383,9.81315),
Point(48.80382,9.81306),
Point(48.80381,9.81301),
Point(48.8038,9.8129),
Point(48.8038,9.81285),
Point(48.80381,9.81269),
Point(48.80383,9.81255),
Point(48.80386,9.8124),
Point(48.80392,9.81219),
Point(48.80394,9.8121),
Point(48.80395,9.81201),
Point(48.80395,9.81192),
Point(48.80395,9.81186),
Point(48.80394,9.81182),
Point(48.80391,9.81173),
Point(48.80386,9.81165),
Point(48.80377,9.81154),
Point(48.80372,9.81194),
Point(48.8037,9.81213),
Point(48.80368,9.81238),
Point(48.80366,9.81263),
Point(48.80367,9.81284),
Point(48.8037,9.81314),
Point(48.80375,9.81341),
Point(48.80383,9.81367),
Point(48.80393,9.81386),
Point(48.8042,9.81429),
Point(48.80427,9.81447),
Point(48.80432,9.81464),
Point(48.80436,9.81488),
Point(48.80438,9.8152),
Point(48.80437,9.81541),
Point(48.80431,9.81573),
Point(48.80428,9.81596),
Point(48.80428,9.81616),
Point(48.80431,9.81636),
Point(48.80436,9.81655),
Point(48.80444,9.81673),
Point(48.80455,9.81686),
Point(48.80466,9.81693),
Point(48.80477,9.81701),
Point(48.80492,9.81715),
Point(48.805,9.81729),
Point(48.80506,9.81748),
Point(48.80508,9.81767),
Point(48.80511,9.81831),
Point(48.80514,9.81859),
Point(48.80519,9.81886),
Point(48.80524,9.81906),
Point(48.80526,9.81912),
Point(48.80533,9.81933),
Point(48.80502,9.81945),
Point(48.80489,9.8195),
Point(48.80476,9.81954),
Point(48.80472,9.81955),
Point(48.80468,9.81974),
Point(48.80443,9.82051),
Point(48.8042,9.82055),
Point(48.80426,9.83096),
Point(48.80476,9.83378),
Point(48.80391,9.83442),
Point(48.80341,9.8345),
Point(48.80337,9.83477),
Point(48.80332,9.83506),
Point(48.80326,9.83519),
Point(48.80322,9.83526),
Point(48.80317,9.83535),
Point(48.80312,9.83541),
Point(48.80307,9.83545),
Point(48.80302,9.83547),
Point(48.80293,9.83549),
Point(48.80282,9.83547),
Point(48.80276,9.83546),
Point(48.80271,9.83546),
Point(48.8026,9.83547),
Point(48.80259,9.83541),
Point(48.80257,9.83536),
Point(48.80255,9.83533),
Point(48.80252,9.83531),
Point(48.80249,9.8353),
Point(48.80246,9.8353),
Point(48.80243,9.83531),
Point(48.80213,9.83487),
Point(48.80197,9.83463),
Point(48.80184,9.83443),
Point(48.80177,9.83432),
Point(48.80171,9.83423),
Point(48.80149,9.8339),
Point(48.80143,9.83382),
Point(48.80122,9.83349),
Point(48.80124,9.83342),
Point(48.80124,9.83334),
Point(48.80122,9.83326),
Point(48.8012,9.83321),
Point(48.80116,9.83316),
Point(48.80111,9.83315),
Point(48.80107,9.83316),
Point(48.80103,9.8332),
Point(48.80101,9.83323),
Point(48.80098,9.8333),
Point(48.80097,9.83337),
Point(48.80076,9.8335),
Point(48.80056,9.8336),
Point(48.80025,9.83375),
Point(48.8001,9.83384),
Point(48.79999,9.83395),
Point(48.79932,9.83373),
Point(48.79916,9.8337),
Point(48.79884,9.83379),
Point(48.79869,9.83315),
Point(48.79854,9.83256),
Point(48.79937,9.83159),
Point(48.79914,9.83074),
Point(48.79897,9.82964),
Point(48.79896,9.82849),
Point(48.79894,9.82707),
Point(48.79896,9.82421),
Point(48.79895,9.82133),
Point(48.79895,9.8209),
Point(48.79876,9.81971),
Point(48.79878,9.80671),
Point(48.79865,9.80349),
Point(48.79846,9.80336),
Point(48.79822,9.80332),
Point(48.79808,9.80337),
Point(48.79777,9.80347),
Point(48.79694,9.80319),
Point(48.7968,9.80363),
Point(48.79672,9.80388),
Point(48.79667,9.80407),
Point(48.79663,9.80427),
Point(48.79656,9.80461),
Point(48.79651,9.80487),
Point(48.79647,9.80507),
Point(48.79642,9.80529),
Point(48.79637,9.80549),
Point(48.79626,9.80583),
Point(48.79465,9.81061),
Point(48.79414,9.8116),
Point(48.79404,9.81192),
Point(48.7939,9.81228),
Point(48.79378,9.81251),
Point(48.79369,9.81269),
Point(48.79359,9.81287),
Point(48.79344,9.81317),
Point(48.79332,9.81341),
Point(48.79318,9.81368),
Point(48.79312,9.81382),
Point(48.79302,9.81402),
Point(48.79293,9.81418),
Point(48.79287,9.81429),
Point(48.79277,9.81439),
Point(48.7927,9.81445),
Point(48.79262,9.81451),
Point(48.79253,9.81457),
Point(48.79247,9.81461),
Point(48.7924,9.81461),
Point(48.79233,9.81499),
Point(48.79226,9.81522),
Point(48.79217,9.81542),
Point(48.79208,9.81564),
Point(48.79195,9.81588),
Point(48.79179,9.81611),
Point(48.79162,9.81631),
Point(48.79143,9.81654),
Point(48.79133,9.81669),
Point(48.7912,9.81695),
Point(48.79109,9.81715),
Point(48.79101,9.81732),
Point(48.79095,9.81746),
Point(48.79088,9.81764),
Point(48.79083,9.81787),
Point(48.79076,9.81808),
Point(48.7907,9.81825),
Point(48.79065,9.81835),
Point(48.79011,9.81619),
Point(48.78991,9.81603),
Point(48.78964,9.81575),
Point(48.78944,9.8163),
Point(48.7893,9.81617),
Point(48.78904,9.81423),
Point(48.78901,9.81418),
Point(48.78897,9.8141),
Point(48.78898,9.814),
Point(48.78864,9.81333),
Point(48.78816,9.81258),
Point(48.7904,9.80127),
Point(48.79168,9.79592),
Point(48.79256,9.79319),
Point(48.79332,9.79002),
Point(48.79277,9.78776),
Point(48.79129,9.7818),
Point(48.78721,9.78206),
Point(48.78689,9.78165),
Point(48.78522,9.78379),
Point(48.78507,9.7838),
Point(48.78461,9.78352),
Point(48.78445,9.78356),
Point(48.78439,9.78373),
Point(48.78435,9.78405),
Point(48.78429,9.78433),
Point(48.78414,9.78474),
Point(48.78341,9.78345),
Point(48.78304,9.7834),
Point(48.78274,9.78194),
Point(48.78303,9.78134),
Point(48.78323,9.78117),
Point(48.78358,9.78084),
Point(48.78372,9.78062),
Point(48.78403,9.77933),
Point(48.78413,9.77857),
Point(48.78433,9.77789),
Point(48.78457,9.77709),
Point(48.78459,9.77637),
Point(48.78473,9.77564),
Point(48.78482,9.77512),
Point(48.78479,9.77481),
Point(48.78487,9.7743),
Point(48.78458,9.77361),
Point(48.78392,9.77289),
Point(48.78384,9.7731),
Point(48.78377,9.77319),
Point(48.7837,9.77322),
Point(48.7836,9.77317),
Point(48.78352,9.77308),
Point(48.78346,9.7729),
Point(48.78341,9.77273)
    };
    
    std::cout << IsInside(polygon, p) << std::endl;
}