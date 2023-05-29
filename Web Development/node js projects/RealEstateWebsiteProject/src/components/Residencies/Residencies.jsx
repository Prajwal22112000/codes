import React from "react";
import { Swiper, SwiperSlide, useSwiper } from "swiper/react";
import "swiper/css";
import "./Residencies.css";
import data from "../../utils/slider.json";
import { sliderSettings } from "../../utils/common";

const Residencies = () => {
  return (
    <section className="r-wrapper">
      <div className="innerWidth paddings r-container">
        <div className="r-head flexColStart">
          <span className="greenText">Best Choices</span>
          <span className="primaryText">Popular Residencies</span>
        </div>
      <Swiper {...sliderSettings}>
        <SliderButtons>
          
        </SliderButtons>
        {data.map((value, index) => {
          return (
            <SwiperSlide key={index}>
              <div className=" flexColCenter r-card ">
                <img src={value.image} alt="Home" />

                <span className=" greenText r-price">
                  <span style={{color:"green"}}>$</span>
                  <span>{value.price}</span>
                </span>

                <span className=" primaryText">{value.name}</span>

                <span className="greenText">{value.detail}</span>
              </div>
            </SwiperSlide>
          );
        })}
      </Swiper>
      </div>
    </section>
  );
};
export default Residencies;

const SliderButtons = () => {
  const swiper = useSwiper();
  return(<>
    <div className="r-buttons">
      <button onClick={()=> swiper.slidePrev()}> &lt;</button>
      <button onClick={()=> swiper.slideNext()}> &gt;</button>
    </div>
  </>)
}