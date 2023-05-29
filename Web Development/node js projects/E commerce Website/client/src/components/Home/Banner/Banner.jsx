import React from "react";
import bannerimg from "../../../assets/banner-img.png";
import "./Banner.scss";
const Banner = () => {
  return (
    <div className="banner-hero">
      <div className="flexCenter banner-content">
        <div className="banner-left">
          <h1>SALES</h1>
          <p>
            tellus lacinia aliquam. Suspendisse cursus euismod ante.
            <br />
            Fusce sit amet erat nec diam ultricies auctor. Morbi tor
          </p>
          <div className="flexCenter buttons">
            <button>READ MORE</button>
            <button>SHOW NOW</button>
          </div>
        </div>
        <div className="flexColCenter banner-right">
          <img src={bannerimg} alt="img" />
        </div>
      </div>
    </div>
  );
};

export default Banner;
